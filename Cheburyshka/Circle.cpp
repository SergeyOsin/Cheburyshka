#include "Circle.h" 

void Circle::draw() {
    if (center.x < 0 || center.y < 0) {
        throw Negative("Circle", center, r);
    }
    if (center.x - r < rt.left || center.x + r > rt.right || center.y - r < rt.top
        || center.y + r > rt.bottom) {
        throw Border("Circle", center, r);
    }
    HPEN pen = CreatePen(PS_SOLID, 4, color_1);
    HBRUSH brush = CreateSolidBrush(color_2);
    SelectObject(hdc, pen);
    SelectObject(hdc, brush);
    Ellipse(hdc, center.x - r, center.y + r, center.x + r, center.y - r);
    DeleteObject(pen);
    DeleteObject(brush);
}