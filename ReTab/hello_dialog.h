#ifndef HELLO_DIALOG_H
#define HELLO_DIALOG_H

#include <QDialog>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>

namespace Ui {
class Hello_Dialog;
}

class Hello_Dialog : public QDialog
{
    Q_OBJECT

public:

    explicit Hello_Dialog(QWidget *parent = nullptr);

    ~Hello_Dialog();

    QString get_Response();

private slots:
    void on_pushButton_obzor_clicked();

    void on_pushButton_clicked();

private:

    Ui::Hello_Dialog *ui;

    std::string cmd_response(const char* cmd); // Функция получения данных из консоли

};

#endif // HELLO_DIALOG_H
