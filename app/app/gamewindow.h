#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include <QPushButton>

#include <QMainWindow>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
