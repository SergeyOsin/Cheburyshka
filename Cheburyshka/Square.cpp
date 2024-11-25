#include "Square.h"
#include "Figure.h"
Square::Square(Point t, int a, COLORREF b, COLORREF w) : bc(b), wc(w),
Figure(t, a, b, w) {
    x3 = t.x, y3 = t.y;
    x4 = t.x + a, y4 = t.y + a;
}



void Square::draw() {

    cout << "Square " << x3 << " " << y3 << " " << x4 << " " << y4 << '\n';
    HPEN p = CreatePen(PS_SOLID, 2, bc);
    HBRUSH b = CreateSolidBrush(wc);
    GetClientRect(hwnd, &rt);
    SelectObject(hdc, p);
    SelectObject(hdc, b);
    Rectangle(hdc, x3, y3, x4, y4);
    DeleteObject(p);
    DeleteObject(b);
}




