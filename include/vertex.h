/*
 * Author: Cole Koester
 * Date: 27/11/2018
 */

#ifndef VERTEX_H
#define VERTEX_H

//#include "hedge.h"

class Hedge;

class Vertex {
public:    
	Vertex(double x, double y, Hedge *h);
    Vertex(const Vertex &v);

    double x();
    double y();
    Hedge *h();

private:
	double _x, _y;
    Hedge *_h; 
};

#endif
