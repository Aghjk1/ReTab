#ifndef HELLO_DIALOG_H
#define HELLO_DIALOG_H

#include <QDialog>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

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

private:

    Ui::Hello_Dialog *ui;

    std::string cmd_response(const char* cmd); // Функция получения данных из консоли

};

#endif // HELLO_DIALOG_H
