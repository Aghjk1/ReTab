#include "hello_dialog.h"
#include "ui_hello_dialog.h"

Hello_Dialog::Hello_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hello_Dialog)
{

    ui->setupUi(this);

    QFile conf_file("config.txt");
    if ((!conf_file.exists() || !conf_file.open(stderr, QIODevice::ReadOnly)))
    {

        QMessageBox::warning(this, tr("Фатальная ошибка"), tr("Не найден файл конфигурации"));

        QString user_folder = QString::fromStdString(cmd_response("ECHO %USERPROFILE%")); // получение пути до папки пользователя
        ui->lineEdit->setText(user_folder.left(user_folder.size() - 1) + "/Documents/RETAB/bd.db"); // получение и запись пути до папки документов

        return;

    }

    QString conf;
    //while(!conf_file.atEnd()) conf += conf_file.readLine();
    conf = conf_file.readLine();

//    int index = conf.indexOf("Last_bd_name = ") + 15;
//    conf = conf.remove(0, index);
//    index = conf.indexOf('\n');
//    conf = conf.remove(index, conf.length());
    ui->lineEdit->setText(conf);


    conf_file.close();

}

std::string Hello_Dialog::cmd_response(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), static_cast<int>(buffer.size()), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}


Hello_Dialog::~Hello_Dialog()
{
    delete ui;
}



QString Hello_Dialog::get_Response()
{

    return ui->label->text();

}

void Hello_Dialog::on_pushButton_obzor_clicked()
{

    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "c://", "BD file (*.db)");
    ui->lineEdit->setText(filename);

}

void Hello_Dialog::on_pushButton_clicked()
{

    QFile conf_file("config.txt");
    if ((!conf_file.exists() || !conf_file.open(stderr, QIODevice::ReadWrite)))
    {

        QMessageBox::warning(this, tr("Фатальная ошибка"), tr("Не найден файл конфигурации"));

        return;

    }
    QString conf;
    while(!conf_file.atEnd()) conf += conf_file.readLine();

    QFile file(ui->label->text());

    // случай если файл существует
    if (file.open(stderr, QIODevice::ReadOnly) && file.exists())
    {



        QWidget::close();
        return;

    }

}
