#include "Position.h"
#include "Utils.h"


Position::Position(std::string fen, int nOfColumns, int nOfRows, char columns[], char rows[]) {
    _fen = fen;
    _numberOfColumns = nOfColumns;
    _numberOfRows = nOfRows;
    _columns = new char[_numberOfColumns];
    _rows = new char[_numberOfRows];
}

void Position::updatePosition(std::string fen) {

    std::vector<std::string> splitFEN = splitString(fen, ' ');
    auto boardFEN         = splitFEN[0];
    auto colourFEN        = splitFEN[1];
    auto castleFEN        = splitFEN[2];
    auto enPassantFEN     = splitFEN[3];
    auto halfMoveFEN      = splitFEN[4];
    auto fullMoveNumerFEN = splitFEN[5];

}
