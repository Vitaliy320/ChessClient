#pragma once
#ifndef POSITION_H
#define POSITION_H

#endif // POSITION_H


#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Square.h"

class Position {
public:
    Position();
    Position(std::string fen, int nOfColumns, int nOfRows, char columns[], char rows[]);
    void updatePosition(std::string fen);
    std::string getFEN();
    void setFEN(std::string fen);


private:
    std::string _fen;
    std::map<std::string, std::shared_ptr<Square>> _squares;
    char _activeColour;
    std::string _castleOptions;
    std::string _enPassantSquare;
    int _halfMoveClock;
    int _fullMoveNumber;
    int _numberOfColumns;
    int _numberOfRows;
    char* _columns;
    char* _rows;
};
