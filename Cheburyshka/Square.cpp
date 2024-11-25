#include "Square.h"
#include "Figure.h"
Square::Square(Point _t, int r, COLORREF ñ1, COLORREF ñ2) : bc(b), wc(w),
Figure(_t, r, c1, c2) {
    x3 = t.x, y3 = t.y;
    x4 = t.x + r, y4 = t.y + r;
}



void Square::draw() {
    HPEN p = CreatePen(PS_SOLID, 2, c1);
    HBRUSH b = CreateSolidBrush(c2);
    GetClientRect(hwnd, &rt);
    SelectObject(hdc, p);
    SelectObject(hdc, b);
    Rectangle(hdc, x3, y3, x4, y4);
    DeleteObject(p);
    DeleteObject(b);
}




