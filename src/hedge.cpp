#include <iostream>
#include "../include/hedge.h"

using namespace std;

Hedge::Hedge() {
	set_twin(nullptr);
    set_prev(nullptr);
    set_next(nullptr);
    set_target(nullptr);
    set_face(nullptr);
}

Hedge::Hedge(Hedge  *twin, Hedge  *prev, Hedge  *next,
             Vertex *target, Face   *face) {
	set_twin(twin);
    set_prev(prev);
    set_next(next);
    set_target(target);
    set_face(face);
}

void Hedge::set_twin(Hedge *twin) {
	_twin = twin;
}

void Hedge::set_prev(Hedge *prev) {
	_prev = prev;
}

void Hedge::set_next(Hedge *next) {
	_next = next;
}

void Hedge::set_target(Vertex *target) {
	_target = target;
}

void Hedge::set_face(Face *face) {
	_face = face;
}

Hedge *Hedge::twin() {
	return _twin;
}

Hedge *Hedge::prev() {
	return _prev;
}

Hedge *Hedge::next() {
	return _next;
}

Vertex *Hedge::target() {
	return _target;
}

Face *Hedge::face() {
	return _face;
}
