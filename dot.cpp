#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int main() {
    auto image = st::vector <st::vector <char>> ();
    st::cout << "test" << st::endl;
    for (auto imageIndex = 0; imageIndex < 51; imageIndex++)
    {
        st::vector<char>Column;
        image.push_back(Column);
        for (auto rowIndex = 0; rowIndex < 51; rowIndex++)
        {
            image.at(imageIndex).push_back('.');  
        }
    }

    auto radius = 10;

    auto centerX = (image.size() / 2);
    auto centerY = (image[0].size() / 2);
    image[centerX][centerY] = '0';

    // auto yPostion = sqrt((radius * radius)+((centerX+5) * (centerX+5)));
    // st::cout << yPostion << st::endl;
    // image[centerX-5][yPostion] = '0';

    for (auto xPosition = 0; xPosition <= radius; xPosition++)
    {
        auto yPosition = round(sqrt((radius * radius)-((xPosition-centerX) * (xPosition-centerX))));
        st::cout << yPosition << st::endl;
        image[xPosition + centerX][yPosition] = '0';
    }
           

    for (auto imageI = 0; imageI < image.size(); imageI++)
    {
        for (auto rowI = 0; rowI < image[imageI].size(); rowI++)
        {
            st::cout << image[imageI][rowI];
        }
        st::cout << '\n';
    }

    st::cout << centerX << st::endl;
    st::cout << centerY << st::endl;
    return 0;   
}