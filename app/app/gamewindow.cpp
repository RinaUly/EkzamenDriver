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
    ui->label_3->setText("0"); //выставляю счёт на 0
    ui->pushButton_3->setEnabled(true); //при нажатии на сброс восстанавливаю исходные параметры кнопки
    ui->pushButton_3->setText("");
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_2->setText("");
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_8->setText("");
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_5->setText("");
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_6->setText("");
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_9->setText("");
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_4->setText("");
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_7->setText("");
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_10->setText("");
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

void GameWindow::on_pushButton_2_clicked()
{
    count++;
    ui->pushButton_2->setText(QString::number(mas[1]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[1]));
    ui->pushButton_2->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_8_clicked()
{
    count++;
    ui->pushButton_8->setText(QString::number(mas[2]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[2]));
    ui->pushButton_8->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_5_clicked()
{
    count++;
    ui->pushButton_5->setText(QString::number(mas[3]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[3]));
    ui->pushButton_5->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_6_clicked()
{
    count++;
    ui->pushButton_6->setText(QString::number(mas[4]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[4]));
    ui->pushButton_6->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_9_clicked()
{
    count++;
    ui->pushButton_9->setText(QString::number(mas[5]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[5]));
    ui->pushButton_9->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_4_clicked()
{
    count++;
    ui->pushButton_4->setText(QString::number(mas[6]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[6]));
    ui->pushButton_4->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_7_clicked()
{
    count++;
    ui->pushButton_7->setText(QString::number(mas[7]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[7]));
    ui->pushButton_7->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}


void GameWindow::on_pushButton_10_clicked()
{
    count++;
    ui->pushButton_10->setText(QString::number(mas[8]));
    ui->label_3->setText(QString::number(ui->label_3->text().toInt()+mas[8]));
    ui->pushButton_10->setEnabled(false);
    if (count==3) {
        QMessageBox::warning(this, "Счёт", "Итоговый счёт: " + ui->label_3->text());
        on_pushButton_clicked();
    }
}

