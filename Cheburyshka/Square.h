#pragma once
#include "Figure.h"
class Square : public Figure {
public:
	Square(Point t, int a, COLORREF b, COLORREF);
	void draw() override;
private:
	int x3, y3;
	int x4, y4;
};
