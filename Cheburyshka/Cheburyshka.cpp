#include "Cheburyshka.h"

Cheburyshka::Cheburyshka(Point _t, int a, COLORREF c1, COLORREF c2)
{
	body = Body({ _t.x, _t.y + a }, a, c1);
	head = Head(_t, a, c2, c1);
}

void Cheburyshka::draw()
{
	head.draw();
	body.draw_body();
}
