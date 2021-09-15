#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int main() {
    auto image = st::vector <st::vector <char>> ();
    for (auto imageIndex = 0; imageIndex < 21; imageIndex++)
    {
        st::vector<char>Column;
        image.push_back(Column);
        for (auto rowIndex = 0; rowIndex < 21; rowIndex++)
        {
            image.at(imageIndex).push_back('.');  
        }
    }

    auto centerY = image.size() / 2;
    auto centerX = image[centerY].size() / 2;

    st::cout << centerY;
    st::cout << ' ';
    st::cout << centerX << st::endl;

    for (auto imageY = 0; imageY < image.size(); imageY++)
    {
        if (imageY == centerY)
        {
            for (auto countX = 0; countX < image[imageY].size(); countX++)
            {
                image[centerY][countX] = '0';
            } 
        }
    }

    for (auto imageX = 0; imageX < image[centerY].size(); imageX++)
    {
        if (imageX == centerX)
        {
            for (auto countY = 0; countY < image.size(); countY++)
            {
                image[countY][centerX] = '0';
            }
        } 
    }         

    for (auto imageI = 0; imageI < image.size(); imageI++)
    {
        for (auto rowI = 0; rowI < image[imageI].size(); rowI++)
        {
            st::cout << image[imageI][rowI] << ' ';
        }
        st::cout << '\n';
    }
    return 0;   
}