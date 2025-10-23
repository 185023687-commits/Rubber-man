#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QKeyEvent>
#include<QTimer>
#include<QPropertyAnimation>
#include<QSequentialAnimationGroup>
#include <QPainter>
#include<QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/2.png");
    ui->label->setPixmap(pix);

    QPixmap pix2(":/1.png");
    ui->label_2->setPixmap(pix2);

    QTimer::singleShot(4500,this,[=](){
        ui->label_3->deleteLater();
        ui->label_4->deleteLater();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        up();
        break;

    case Qt::Key_Right:
        right();
        break;
    case Qt::Key_Left:
        left();
    }


}
void MainWindow::up()
{
    QRect currentRect = ui->label_2->geometry();
    int newY = currentRect.y() - 36;  // 上移10像素
    ui->label_2->setGeometry(currentRect.x(), newY, currentRect.width(), currentRect.height());

    QTimer::singleShot(965, this,[=](){
        QRect currentRect = ui->label_2->geometry();
        int newY = currentRect.y() + 36;  // 上移10像素
        ui->label_2->setGeometry(currentRect.x(), newY, currentRect.width(), currentRect.height());
    });
}

void MainWindow::right()
{
    QRect currentRect1 = ui->label->geometry();
    int newX = currentRect1.x() - 20;  // 上移10像素
    ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());
    QTimer::singleShot(500,this,[=](){
        QRect currentRect1 = ui->label->geometry();
        int newX = currentRect1.x()  ==-11;  // 上移10像素
        ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());
    });
}

void MainWindow::left()
{
    QRect currentRect2 = ui->label->geometry();
    int newX = currentRect2.x() + 36;
    ui->label->setGeometry(newX,currentRect2.y(),currentRect2.width(), currentRect2.height());
    QTimer::singleShot(10,this,[=](){
        QRect currentRect2 = ui->label->geometry();
        int newX = currentRect2.x()  ==-11;  // 上移10像素
        ui->label->setGeometry(newX, currentRect2.y(), currentRect2.width(), currentRect2.height());
    });
}

