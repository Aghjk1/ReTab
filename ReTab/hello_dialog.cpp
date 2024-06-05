#include "hello_dialog.h"
#include "ui_hello_dialog.h"

Hello_Dialog::Hello_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hello_Dialog)
{

    ui->setupUi(this);
    QString user = QString::fromStdString(cmd_response("ECHO %USERPROFILE%"));
    ui->lineEdit->setText(user.left(user.size() - 1) + "/Documents/RETAB");

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
