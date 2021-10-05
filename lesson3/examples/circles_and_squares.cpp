#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

class Circle{
    friend class Canvas;

    public:
        Circle(Canvas &canvas, int radius, int xCenter = 0, int yCenter = 0);

    protected:
        Canvas &canvas;
        int radius;
        int xCenter;
        int yCenter;

        void render();
};

class Square{
    friend class Canvas;

    public:
        Square(Canvas &canvas, int side, int x = 0, int y = 0);

    protected:
        Canvas &canvas;
        int side;
        int xCenter;
        int yCenter;

        void render();
};

class Canvas{
    friend class Circle;
    friend class Square;

    public:
        Canvas (int width = 64, int height = 48);
};

int main(){
    auto canvas = Canvas();
    Circle(canvas, 16);
    Circle(canvas, 8, -14, 14);

    Square(canvas, 32);
    Square(canvas, 16, 14, -14);

    canvas.render();

    return 0;
}