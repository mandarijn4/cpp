#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int xCoordinate(double rowI, double cX){
    auto xC = rowI - cX;
    return xC;
}

int yCoordinate(double columnI, double cY){
    auto yC = columnI - cY;
    return yC;
}

int main() {
    auto sizeOfFields = 10;

    auto sizeOfBoard = 101;

    auto innerRadius = 20;
    auto outerRadius = 40;

    auto playBoard = st::vector<st::vector<float>> ();
    
    auto centerX = sizeOfBoard / 2;
    auto centerY = sizeOfBoard / 2;

    for (auto columnIndex = 0; columnIndex < sizeOfBoard; columnIndex++)
    {
        for (auto rowIndex = 0; rowIndex < sizeOfBoard; rowIndex++)
        {
            auto playBoardColumn = st::vector<float>();
            playBoard.push_back(playBoardColumn);
            auto boxIndexRow = rowIndex % (sizeOfFields * 2);
            auto boxIndexColumn = columnIndex % (sizeOfFields * 2);
            if ((boxIndexRow >= sizeOfFields && boxIndexColumn < sizeOfFields) || (boxIndexRow < sizeOfFields && boxIndexColumn >= sizeOfFields))
            {
                playBoard[columnIndex].push_back(32);
            }
            else{
                playBoard[columnIndex].push_back(0);
            }
            auto x = xCoordinate(rowIndex, centerX);
            auto y = yCoordinate(columnIndex, centerY);
            auto radius = sqrt(pow(x, 2) + pow(y, 2));
            if (radius >= innerRadius && radius <= outerRadius)
            {
                playBoard[columnIndex][rowIndex] += 96;
            }
        }
    }

    for (auto columnIndex = 0; columnIndex < sizeOfBoard; columnIndex++)
    {
        for (auto rowIndex = 0; rowIndex < sizeOfBoard; rowIndex++)
        {
            if (playBoard[columnIndex][rowIndex] == 0){st::cout << ' ' << ' ';}
            else if (playBoard[columnIndex][rowIndex] == 32){st::cout << '1' << ' ';}
            else if (playBoard[columnIndex][rowIndex] == 64){st::cout << 'L' << ' ';}
            else if (playBoard[columnIndex][rowIndex] == 96){st::cout << 'L' << ' ';}
            else if (playBoard[columnIndex][rowIndex] == 128){st::cout << 'N' << ' ';}
            else {st::cout << '@' << ' ';}
        }
        st::cout << '\n';
    }
}