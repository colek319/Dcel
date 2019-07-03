#include "../include/dcel.h"

Dcel::Dcel() {
    U->U() = new Face();
}

// todo: define string metaformat.
//  maybe just use json.
Dcel::Dcel(string import) {
    U->U() = new Face();
}

Dcel::~Dcel() {
    delete U->U();
}




