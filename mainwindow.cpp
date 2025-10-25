#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QKeyEvent>
#include<QTimer>
#include<QApplication>
#include"dead.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //窗口标题
    setWindowTitle("RUBBER MAN");
    //窗口图标
    setWindowIcon(QPixmap(":/1.png"));
    //地面
    QPixmap pix(":/2.png");
    ui->label->setPixmap(pix);
    //人物
    QPixmap pix2(":/1.png");
    ui->label_2->setPixmap(pix2);

    QPixmap pix3(":/errrrrrr.png");
    ui->label_5->setPixmap(pix3);

    QTimer::singleShot(4500,this,[=](){
        ui->label_3->deleteLater();
        ui->label_4->deleteLater();
    });

    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);

    if (ui->progressBar->value() == 0)
    {
        s.show();
    }
    if (s.close())
    {
        ui->progressBar->setValue(100);
    }
    if (ui->label_5->geometry().x() == ui->label_2->geometry().x())
    {
        ui->progressBar->setValue(ui->progressBar->value() - 10);
    }
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
        break;
    }


}
void MainWindow::up()
{
    QRect currentRect = ui->label_2->geometry();
    int newY = currentRect.y() - 36;
    ui->label_2->setGeometry(currentRect.x(), newY, currentRect.width(), currentRect.height());

    QTimer::singleShot(965, this,[=](){
        QRect currentRect = ui->label_2->geometry();
        int newY = currentRect.y() + 36;
        ui->label_2->setGeometry(currentRect.x(), newY, currentRect.width(), currentRect.height());
    });
}

void MainWindow::right()
{
    QRect currentRect1 = ui->label->geometry();
    int newX = currentRect1.x() - 20;
    ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());
    QTimer::singleShot(500,this,[=](){
        QRect currentRect1 = ui->label->geometry();
        int newX = currentRect1.x()  == -11;
        ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());


        QRect currentRect = ui->label_5->geometry();
        int NewX = currentRect.x() - 20;
        ui->label_5->setGeometry(NewX, currentRect.y(), currentRect.width(), currentRect.height());
        //(=
        //I know you're hurry,but don't hurry
        //Because I'am hurry too(I don't have some ideas for these code.)(=(=
    });
}



void MainWindow::left()
{
    QRect currentRect2 = ui->label->geometry();
    int newX = currentRect2.x() + 36;
    ui->label->setGeometry(newX,currentRect2.y(),currentRect2.width(), currentRect2.height());
    QTimer::singleShot(1,this,[=](){
        QRect currentRect2 = ui->label->geometry();
        int newX = currentRect2.x()  ==-11;  // 归位
        ui->label->setGeometry(newX, currentRect2.y(), currentRect2.width(), currentRect2.height());

    });

    QRect currentRect = ui->label_5->geometry();
    int NewX = currentRect.x() + 20;
    ui->label_5->setGeometry(NewX, currentRect.y(), currentRect.width(), currentRect.height());
}
/*解释:
 * 此处的
 * QTimer::singleShot(500,this,[=](){
        QRect currentRect1 = ui->label->geometry();
        int newX = currentRect1.x()  ==-11;
        ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());
    });
 * 是因为图片有限而实现的一种视觉上的"无限移动"
 */
