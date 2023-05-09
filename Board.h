#pragma once
#ifndef BOARD_H
#define BOARD_H

#endif // BOARD_H

#include <iostream>
#include <vector>
#include <map>
#include "Square.h"
#include <tuple>
#include <map>
#include "Position.h"


class Board{
public:
    void updateBoard();
    virtual void initialiseBoard() = 0;
    std::map<std::string, std::shared_ptr<Square>> getSquares();
    Square getSquareByCoordinates(std::pair<char, char> coordinates);
    Position fenToPosition();

protected:
    int numberOfColumns;
    int numberOfRows;
    std::map<std::string, std::shared_ptr<Square>> squares;
    std::string boardFEN;
private:

};
