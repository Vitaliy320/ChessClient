#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <vector>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);
private slots:

private:
    Ui::MainWindow *ui;
    std::vector<QRect> _squares;
    float _guiScale;
    float _calculateGuiScale();
    int _defaultSquareSize;
    int _boardSize;
};

#endif // MAINWINDOW_H
