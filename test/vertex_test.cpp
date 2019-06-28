#include <iostream>
#include "../include/vertex.h"

using namespace std;

int main()
{
    cout << "Hello World" << endl;
	Vertex *v = new Vertex(1.5, 1.5, nullptr);
    cout << "(" << v->x() << " ," << v->y() << ")" << endl;

    return 0;
}


