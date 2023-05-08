#include "ClassicBoard.h"


ClassicBoard::ClassicBoard(){
    numberOfColumns = 8;
    numberOfRows = 8;

    boardFEN = "";

    char columns[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char rows[] = {'1', '2', '3', '4', '5', '6', '7', '8'};

    std::string coordinatesString;

    for (char column: columns){
        for (char row: rows){
            coordinatesString = std::string(1, column) + std::string(1, row);
            std::cout << coordinatesString;
            squares[coordinatesString] = std::make_shared<Square>(Square(std::make_pair(column, row)));
        }
    }
}

void ClassicBoard::initialiseBoard(){

}
