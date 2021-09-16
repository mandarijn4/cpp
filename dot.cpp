#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int main() {
    auto image = st::vector <st::vector <char>> ();
    for (auto imageIndex = 0; imageIndex < 41; imageIndex++)
    {
        st::vector<char>Column;
        image.push_back(Column);
        for (auto rowIndex = 0; rowIndex < 41; rowIndex++)
        {
            image.at(imageIndex).push_back('.');  
        }
    }

    auto k = image.size() / 2;
    auto h = image[k].size() / 2;

    st::cout << h;
    st::cout << ' ';
    st::cout << k << st::endl;

    for (auto imageY = 0; imageY < image.size(); imageY++)
    {
        if (imageY == k)
        {
            for (auto countX = 0; countX < image[imageY].size(); countX++)
            {
                image[k][countX] = '0';
            } 
        }
    } 

    for (auto imageX = 0; imageX < image[k].size(); imageX++)
    {
        if (imageX == h)
        {
            for (auto countY = 0; countY < image.size(); countY++)
            {
                image[countY][h] = '0';
            }
        } 
    }
    for (auto radius = 10; radius < 15; radius++)
    {
        for (auto x = h - radius; x < h + radius; x++)
        {
            auto y = (sqrt((radius * radius) - ((x - h) * (x - h)))) + k;
            st::cout << y << st::endl;
            image[y][x] = '5';
        }
        for (auto x = h + radius; x > h - radius; x--)
        {
            auto y = -(sqrt((radius * radius) - ((x - h) * (x - h)))) + k;
            st::cout << y << st::endl;
            image[y][x] = '5';
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
    // st::cout << calculateY << st::endl;
    // auto qaudrant = pow(-2.0, 2.0);
    // st::cout << qaudrant << st::endl;

    // auto yCoordinate = sqrt(pow(2.0, 2.0) - pow(-2.0 + 4, 2.0)) - 2;
    // st::cout << yCoordinate << st::endl;

    // auto h = 20;
    // auto k = 20;
    // auto radius = 10;

    // for (auto x = h - radius; x <= radius + h; x++)
    // {
    //     auto y = (sqrt((radius * radius) - ((x - h) * (x - h)))) + k;
    //     st::cout << x << ' ';
    //     st::cout << y << st::endl;
    // }
    

    // auto x = 10;
    // // auto y = 20;
    
    // // auto (radius * radius) = ((x - h) * (x - h)) + ((y - k) * (y - k))
    // // auto (radius * radius) - ((x - h) * (x - h)) = ((y - k) * (y - k))
    // // auto (y - k) = sqrt((radius * radius) - ((x - h) * (x - h)))
    
    return 0;   
}

/*
pow((y+centerY), 2.0) = (pow(radius, 2.0) + pow((xCounter+centerX), 2.0))
(y+centerY) = sqrt((pow(radius, 2.0) + pow((xCounter+centerX), 2.0)));
y = sqrt(pow(radius, 2.0) + pow((xCounter+centerX), 2.0)) - centerY;
sqrt(pow(radius, 2.0) - pow(-xCounter + centerX, 2.0)) - centerY; alternative
*/