import QtQuick 2.15

Repeater {
    model: 64

    Rectangle {
        property int row: Math.floor(index/8);
        property int col: index % 8;
        property int squareSize: 100;
        z: 0;
        x: col * squareSize
        y: (7 - row) * squareSize
        height: squareSize
        width: squareSize
        color: {
            var even = ((row + col) % 2) == 0;
//                if (!ChessModel.canDrop(col, row))
//                    return even ? "#d18b47" : "#ffce9e";
//                if (row == hoverRow && col == hoverCol)
//                    return even ? "#d18bff" : "#ffceff";
            return even ? "#b58863" : "#f0d9b5";
        }
    }
}
