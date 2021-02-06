#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btnAstroid_clicked() {
    RenderArea *drawCanvas = this->ui->renderArea;
    drawCanvas->setShape(RenderArea::Astroid);
    drawCanvas->repaint();
}

void MainWindow::on_btnCycloid_clicked() {
    RenderArea *drawCanvas = this->ui->renderArea;
    drawCanvas->setShape(RenderArea::Cycloid);
    drawCanvas->repaint();
}

void MainWindow::on_btnHuygens_clicked() {
    RenderArea *drawCanvas = this->ui->renderArea;
    drawCanvas->setShape(RenderArea::HuygensCycloid);
    drawCanvas->repaint();
}

void MainWindow::on_btnHypo_clicked() {
    RenderArea *drawCanvas = this->ui->renderArea;
    drawCanvas->setShape(RenderArea::HypoCycloid);
    drawCanvas->repaint();
}
