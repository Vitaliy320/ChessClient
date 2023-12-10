
#include "mainwindow.h"

#include <QApplication>
#include "Board.h"
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QGuiApplication>
#include <QtQuick/QQuickView>
//#include "ClassicBoard.h"


void printBoard(std::vector<std::string> boardString){
    for (auto &row : boardString){
        qDebug() << row << Qt::endl;
    }
}

int main(int argc, char *argv[])
{
    char columns[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0'};
    char rows[] = {'1', '2', '3', '4', '5', '6', '7', '8', '\0'};
    int boardSize = 8;
    std::string boardFEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
    std::vector<std::string> boardString;

    Board board = Board(columns, boardSize, rows, boardSize, boardFEN);

    boardString = board.boardToString();
    printBoard(boardString);


//    board.makeMove(std::make_pair('d', '2'), std::make_pair('d', '4'));
    board.makeMoveStr("d2", "d4");
    boardString = board.boardToString();
    printBoard(boardString);

    board.makeMove(std::make_pair('d', '7'), std::make_pair('d', '5'));
    boardString = board.boardToString();
    printBoard(boardString);

//    QGuiApplication app(argc, argv);
//    QQuickView view;
//    view.setSource(QUrl::fromLocalFile("D:\\Programming\\C++\\Qt\\Projects\\ChessClient\\Chessboard.qml"));
//    view.show();

//    QApplication a(argc, argv);

//    QGraphicsScene * scene = new QGraphicsScene();
//    QGraphicsRectItem * rect = new QGraphicsRectItem();

//    rect->setRect(0, 0, 100, 100);
//    scene->addItem(rect);

//    QGraphicsView * view = new QGraphicsView(scene);

//    view->show();




    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
