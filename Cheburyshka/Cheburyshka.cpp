#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Triangle.h"
#include "Octagon.h"
#include "Circle.h"
using namespace std;
int main()
{
    Triangle fig1 = Triangle({ 400,100 }, {250, 80}, {350, 50}, RGB(255, 0, 0), RGB(255, 0, 0));
    fig1.draw();
    Circle fig2 = Circle({ 350, 120 }, 70, RGB(0, 0, 204), RGB(0, 0, 204));
    fig2.draw();
    Square fig3 = Square({ 350,150 }, 100, RGB(0, 0, 204), RGB(0, 0, 204));
    fig3.draw();
    Octagon fig4 = Octagon({ 350, 300 }, 70, RGB(0, 0, 204), RGB(0, 0, 204));
    fig4.draw();
    Sleep(1000000000);
    system("pause");
    return 0;
}


