#include "King.h"


King::King(char colour){
    this->colour = colour;
}

std::vector<std::string> King::calculatePossibleMoves(){
    return std::vector<std::string>();
}

bool King::getInCheck(){
    return _inCheck;
}

void King::setInCheck(bool inCheck){
    _inCheck = inCheck;
}
