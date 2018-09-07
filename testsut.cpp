#include "sut.h"

int main () {
	SUTest u("Unit testing made simple");
	u.test("foo", 1);
	u.test("bar", 1);
	u.report();
}