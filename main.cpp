
#include "mainwindow.h"

#include <QApplication>
#include "ClassicBoard.h"


int main(int argc, char *argv[])
{
    ClassicBoard board;
    board.initialiseBoard();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
