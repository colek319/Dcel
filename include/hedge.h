#ifndef HEDGE_H
#define HEDGE_H

#include "vertex.h"
#include "face.h"

class Hedge {
 public:
    Hedge();
    Hedge(Hedge  *twin,
          Hedge  *prev,
          Hedge  *next,
          Vertex *target,
          Face   *face);

    void set_twin(Hedge *twin);
    void set_prev(Hedge *prev);
    void set_next(Hedge *next);
    void set_target(Vertex *target);
    void set_face(Face *face);

    Hedge *twin();
    Hedge *prev();
    Hedge *next();
    Vertex *target();
    Face *face();
    
 private:
    Hedge  *_twin;
    Hedge  *_prev;
    Hedge  *_next;
    Vertex *_target;
    Face   *_face;
};

#endif
