#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnMercury_clicked();

    void on_btnVenus_clicked();

    void on_btnEarth_clicked();

    void on_btnMars_clicked();

    void on_btnJupiter_clicked();

    void on_btnSaturn_clicked();

    void on_btnUrenus_clicked();

    void on_btnNeptune_clicked();

    void on_btnBlackhole_clicked();


    void on_lEInfo_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QString userInput;
    QLineEdit *lEInput; // Input QLineEdit
    QLineEdit *lEGravity; // Output QLineEdit
    QLineEdit *lEInfo;
};
#endif // MAINWINDOW_H
