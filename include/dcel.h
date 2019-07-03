#ifndef DCEL_H
#define DCEL_H

#include "../include/vertex.h"
#include "../include/face.h"
#include "../include/hedge.h"

class Dcel {
 public:
    Dcel();
    Dcel(string import);
    ~Dcel();
    
    Face *U();
	
    
 private:
    Face *_U; // outer face
    Vertices 
};

#endif
