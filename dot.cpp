#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int main() {
    auto image = st::vector <st::vector <float>> ();
    for (auto imageIndex = 0; imageIndex < 51; imageIndex++)
    {
        st::vector<float>Column;
        image.push_back(Column);
        for (auto rowIndex = 0; rowIndex < 51; rowIndex++)
        {
            image.at(imageIndex).push_back(20);  
        }
    }

    auto k = image.size() / 2;
    auto h = image[k].size() / 2;

    st::cout << h;
    st::cout << ' ';
    st::cout << k << st::endl;

    for (auto i = 0; i < image.size(); i++)
    {
        image[k][i] = 100;
        image[i][h] = 100;
    }
    

    for (auto radius = 15; radius < 20; radius++)
    {
        for (auto x = h - radius; x <= h + radius; x++)
        {
            auto y = (sqrt((radius * radius) - ((x - h) * (x - h)))) + k;
            if (y == 25)
            {
                st::cout << x << ' ';
                st::cout << y << '\n';
            }
            
            // st::cout << x << ' ';
            // st::cout << round(y) << st::endl;
            image[x][y] = 255;
            image[y][x] = 255;
            auto yb = -(sqrt((radius * radius) - ((x - h) * (x - h)))) + k;
            if (yb == 25)
            {
                st::cout << x << ' ';
                st::cout << yb << '\n';
            }
            // st::cout << x << ' ';
            // st::cout << round(y) << st::endl;
            image[x][yb] = 255;
            image[yb][x] = 255;
        }
    }

    for (auto imageI = 0; imageI < image.size(); imageI++)
    {
        for (auto rowI = 0; rowI < image[imageI].size(); rowI++)
        {
            if (image[imageI][rowI] == 20)
            {
                st::cout << '.' << ' ';
            }
            else if (image[imageI][rowI] == 100)
            {
                st::cout << '0' << ' ';
            }
            else if (image[imageI][rowI] == 255)
            {
                st::cout << 'M' << ' ';
            }
            
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