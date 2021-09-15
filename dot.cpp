#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

int main() {
    auto image = st::vector <st::vector <char>> ();
    for (auto imageIndex = 0; imageIndex < 51; imageIndex++)
    {
        st::vector<char>Column;
        image.push_back(Column);
        for (auto rowIndex = 0; rowIndex < 51; rowIndex++)
        {
            image.at(imageIndex).push_back('.');  
        }
    }           

    for (auto imageI = 0; imageI < image.size(); imageI++)
    {
        for (auto rowI = 0; rowI < image[imageI].size(); rowI++)
        {
            st::cout << image[imageI][rowI];
        }
        st::cout << '\n';
    }
    return 0;   
}