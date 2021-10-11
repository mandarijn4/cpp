#include <iostream>
#include <vector>
#include <cmath>

namespace st = std;

class Canvas;

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
        void render ();

    protected:
        int width;
        int height;
        float xOrigin;
        float yOrigin;
        st::vector <Circle> circles;
        st::vector <Square> squares;
        st::vector <st::vector <char> > rows;
        int xCenter;
        int yCenter;

        void setCenter (int xCenter, int yCenter);
        void drawRelative (float x, float y);
};

Circle::Circle(Canvas &canvas, int radius, int xCenter, int yCenter):
    canvas(canvas), radius(radius), xCenter(xCenter), yCenter(yCenter)
{
    canvas.circles.push_back(*this);
}

Square::Square(Canvas &canvas, int side, int x = 0, int y = 0):
    canvas(canvas), side(side)
{   
    canvas.squares.push_back(*this);
}

int main(){
    auto canvas = Canvas();
    Circle(canvas, 16);
    Circle(canvas, 8, -14, 14);

    Square(canvas, 32);
    Square(canvas, 16, 14, -14);

    canvas.render();

    return 0;
}