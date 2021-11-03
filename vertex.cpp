#include <iostream>
#include "vertex.h"
#include <time.h>

int main() {
	
	srand(time(0));
	Vertex obj[5];

	for (int i = 0; i < 5; ++i)
		obj[i].print();

	return 0;
}
