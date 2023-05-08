#include "Board.h"


std::map<std::string, std::shared_ptr<Square>> Board::getSquares(){
    return squares;
}
