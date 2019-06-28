#include "../include/face.h"

Face::Face() {
	//this->h() = nullptr;
}

Face::Face(Hedge *h) {
	_h = h;
}

Hedge *Face::h() {
	return _h;
}
