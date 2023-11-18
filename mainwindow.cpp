#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString userInput;
    userInput = ui->lEInput->text();
    lEGravity = ui->lEGravity;
    lEInfo = ui->lEInfo;

    connect(ui->btnMercury, &QPushButton::clicked, this, &MainWindow::on_btnMercury_clicked);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnMercury_clicked()
{
    // Get the user's weight input from the QLineEdit
    QString userInputText = ui->lEInput->text();

    // Convert the user input to a double. &conversionSuccess is a pointer to a boolean variable.
    bool conversionSuccess;
    double userInput = userInputText.toDouble(&conversionSuccess);

    // Check if the conversion was successful
    if (conversionSuccess) {
        // Perform the calculation for Mercury's gravity (you can use the actual value)
        double mercuryGravity = userInput * 3.7;  // Adjust with the actual value for Mercury

        // Convert the result back to a string
        QString resultText = QString::number(mercuryGravity);

        double resultEarthText = (mercuryGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);


        // Set the result in the lEGravity QLineEdit
        lEGravity->setText(resultText + " N");

        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: Light");

    } else {
        // Handle the case where the user input is not a valid number
        lEGravity->setText("Invalid Input");
    }


}


void MainWindow::on_btnVenus_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double venusGravity = userInput*8.87;

        QString resultText = QString::number(venusGravity);

        double resultEarthText = (venusGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: Light");
 }
 else {
        lEGravity->setText("Invalid Input");
 }

}


void MainWindow::on_btnEarth_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double earthGravity = userInput*9.8;

        QString resultText = QString::number(earthGravity);

        double resultEarthText = (earthGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "You are on Earth,where every sunrise paints a masterpiece.");


 }
    else{
        lEGravity->setText("Invalid Input");
        }

 }



void MainWindow::on_btnMars_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double marsGravity = userInput*3.72076;

        QString resultText = QString::number(marsGravity);

        double resultEarthText = (marsGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: Light");

 }
    else{
        lEGravity->setText("Invalid Input");
        }
 }



void MainWindow::on_btnJupiter_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double jupiterGravity = userInput*24.79;

        QString resultText = QString::number(jupiterGravity);

        double resultEarthText = (jupiterGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: very Heavy");

 }
        else{
        lEGravity->setText("Invalid Input");
        }
 }



void MainWindow::on_btnSaturn_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double saturnGravity = userInput*10.44;

        QString resultText = QString::number(saturnGravity);

        double resultEarthText = (saturnGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: Heavy");

 }
        else{
        lEGravity->setText("Invalid Input");
        }
 }



 void MainWindow::on_btnUrenus_clicked()
 {
        QString userInputText = ui->lEInput->text();

        bool conversionSuccess;
        double userInput = userInputText.toDouble(&conversionSuccess);

        if(conversionSuccess){
        double uranusGravity = userInput*8.69;

        QString resultText = QString::number(uranusGravity);

        double resultEarthText = (uranusGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: Light");

        }
        else{
        lEGravity->setText("Invalid Input");
        }
 }



void MainWindow::on_btnNeptune_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double neptuneGravity = userInput*11.15;

        QString resultText = QString::number(neptuneGravity);

        double resultEarthText = (neptuneGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth. Feels: Heavy");
 }
        else{
        lEGravity->setText("Invalid Input");
        }
 }


void MainWindow::on_btnBlackhole_clicked()
{
 QString userInputText = ui->lEInput->text();

 bool conversionSuccess;
 double userInput = userInputText.toDouble(&conversionSuccess);

 if(conversionSuccess){
        double blackholeGravity = userInput*1952000000000;

        QString resultText = QString::number(blackholeGravity);

        double resultEarthText = (blackholeGravity/9.8);
        QString resultEarth = QString::number(resultEarthText);

        lEGravity->setText(resultText + " N");
        lEInfo->setText( "Equibalent to your weight: " +resultEarth+" kg On Earth.");

 }
        else{
        lEGravity->setText("Invalid Input");
        }

}

