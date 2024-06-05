#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    // Вывод привтстенного окна с выбором бд
    Hello_Dialog* Hello = new Hello_Dialog(this);

    Hello->exec();

    delete Hello;

}

MainWindow::~MainWindow()
{

    delete ui;

}

