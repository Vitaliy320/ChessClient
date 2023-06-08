
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <qevent.h>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _defaultSquareSize(150)
    , _boardSize(8 * _defaultSquareSize)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

float MainWindow::_calculateGuiScale(){
    QSize mainWindowSize = this->size();

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    float maxHeight = screenGeometry.height() + _defaultSquareSize;
    float maxWidth = screenGeometry.width() + _defaultSquareSize;

    float denominator = std::min(maxHeight, maxWidth);

    float width = mainWindowSize.width();
    float height = mainWindowSize.height();
    return (width < height) ? width / denominator : height / denominator;
}

void MainWindow::resizeEvent(QResizeEvent *event){
    if (_squares.empty()){
        return;
    }
    QMainWindow::resizeEvent(event);

    _guiScale = MainWindow::_calculateGuiScale();

    update();
}

void MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QColor colour;
    int x, y;
    _guiScale = MainWindow::_calculateGuiScale();
    int squareSize = 125 * _guiScale;
    int v = 1;
    for (int j = 0; j < 8; j++){
        for (int i = 0; i < 8; i++){
            x = i * squareSize;
            y = j * squareSize;

            QRect square = QRect(x, y, squareSize, squareSize);
            _squares.push_back(square);

            colour = ((i + j) % 2 == 0) ? QColor(240, 217, 181) : QColor(181, 136, 99); // b58863, f0d9b5
            painter.setBrush(QBrush(colour));
            //            painter.drawRect(square);
            painter.fillRect(square, painter.brush());
        }
    }
}
