#include "sut.h"
#include <stdlib.h>

int main (int argc, char** argv) {
	for(int i=0; i<argc; i++) {
		printf("a[%d]=%s\n", i, argv[i]);
	}

	SUTest u("Unit testing made simple");
	u.test("foo", 1);
	u.test("bar", 1);
	u.report();
	exit(0);
}
