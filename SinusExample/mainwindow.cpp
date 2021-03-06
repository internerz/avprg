#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QAudioInput>
#include <QAudioDecoder>
#include <QAudioFormat>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), audioPlayer(this) {
    initializeAudio();

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initializeAudio(){
    audioPlayer.setAudioSource(&oscillatorSource);
    audioPlayer.start();
}


void MainWindow::on_volumeSlider_valueChanged(int value)
{
    oscillatorSource.setAmplitude(value / 100.);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    oscillatorSource.setFrequence(value);
}

void MainWindow::on_noise_clicked()
{

}
