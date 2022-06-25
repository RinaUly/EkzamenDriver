#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QMessageBox>

int mas[9]={};
int count=0;

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    on_pushButton_clicked();
}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::on_pushButton_clicked()
{
    srand( (unsigned)time(NULL) );
    for (int i=0; i<9; i++) {
        mas[i] = rand()%20000-10000;
        qDebug()<< "generated: " << mas[i];
    }
    ui->label_3->setText("0");
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_3->setText("");
    count=0;
}

void GameWindow::on_pushButton_3_clicked()
{
    count++;
    ui->pushButton_3->setText(QString::number(mas[0]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[0]));
    ui->pushButton_3->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}
