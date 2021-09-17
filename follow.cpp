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

int main(){
    auto size = 51;
    auto centerX = size / 2;
    auto centerY = size / 2;
    auto image = st::vector <st::vector <float>> ();
    auto minRadius = 10;
    auto maxRadius = 15;
    for (auto columnIndex = 0; columnIndex < size; columnIndex++)
    {
        for (auto rowIndex = 0; rowIndex < size; rowIndex++)
        {
            auto x = xCoordinate(rowIndex, centerX);
            auto y = yCoordinate(columnIndex, centerY);
            if (columnIndex % 16 < 8)
            {
                if (rowIndex % 20 < 10)
                {
                    if (sqrt((x * x) + (y * y)) >= minRadius && sqrt((x * x) + (y * y)) <= maxRadius)
                    {
                        st::cout << 'M' << ' ';
                    }
                    else
                    {
                        st::cout << ' ' << ' ';
                    }
                }
                else
                {
                    if (sqrt((x * x) + (y * y)) >= minRadius && sqrt((x * x) + (y * y)) <= maxRadius)
                    {
                        st::cout << 'M' << ' ';
                    }
                    else
                    {
                        st::cout << ';' << ' ';
                    }
                }
            }
           else
           {
               if (rowIndex % 20 < 10)
                {
                    if (sqrt((x * x) + (y * y)) >= minRadius && sqrt((x * x) + (y * y)) <= maxRadius)
                    {
                        st::cout << 'M' << ' ';
                    }
                    else
                    {
                        st::cout << ';' << ' ';
                    }
                }
                else
                {
                    if (sqrt((x * x) + (y * y)) >= minRadius && sqrt((x * x) + (y * y)) <= maxRadius)
                    {
                        st::cout << 'M' << ' ';
                    }
                    else
                    {
                        st::cout << ' ' << ' ';
                    }
                }
           }            
        }
        st::cout << st::endl;        
    }    
    return 0;
}