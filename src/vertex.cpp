/*
 * Author: Cole Koester
 * Date: 27/11/2018
 */

#include "../include/vertex.h"
#include "../include/hedge.h"

Vertex::Vertex(double x, double y, Hedge *h) {
	_x = x;
    _y = y;
    _h = h;
}

Vertex::Vertex(const Vertex &v) {
	_x = v._x;
    _y = v._y;
    _h = v._h;
}

double Vertex::x() {
	return _x;
}

double Vertex::y() {
	return _y;
}

Hedge *Vertex::h() {
	return _h;
}
