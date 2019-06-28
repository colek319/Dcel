/*
 *
 *
 */

#ifndef FACE_H
#define FACE_H

//#include "hedge.h"

class Hedge;

class Face {
 public:
    Face();
	Face(Hedge *h);

    Hedge *h();
    
 private:
    Hedge *_h;
};

#endif
