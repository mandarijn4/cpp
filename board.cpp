#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int main(){
    auto image = st::vector <st::vector <float>> ();
    for (auto columnIndex = 0; columnIndex < 50; columnIndex++)
    {
        for (auto rowIndex = 0; rowIndex < 50; rowIndex++)
        {
            st::vector<float>Column;
            image.push_back(Column);
            if (columnIndex % 20 < 10)
            {
                if (rowIndex % 20 < 10)
                {
                    image[columnIndex].push_back(0);
                }
                else
                {
                    image[columnIndex].push_back(255);
                }
            }
           else
           {
               if (rowIndex % 20 < 10)
                {
                    image[columnIndex].push_back(255);
                }
                else
                {
                    image[columnIndex].push_back(0);
                }
           } 
        }
    }
    // st::cout << image.size();
    for (auto imageI = 0; imageI < sqrt(image.size()); imageI++)
    {
        for (auto rowI = 0; rowI < image[imageI].size(); rowI++)
        {
            if (image[imageI][rowI] == 0)
            {
                st::cout << ' ' << ' ';
            }
            else if (image[imageI][rowI] == 255)
            {
                st::cout << 'M' << ' ';
            }
            // st::cout << image[imageI][rowI] << ' ';            
        }
        st::cout << '\n';
    }
}