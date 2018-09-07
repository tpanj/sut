#ifndef _SIMPLE_UNIT_TEST_1_0
#define _SIMPLE_UNIT_TEST_1_0

#include <cstdio>

#define __SUTest_VERSION "1.0"

const static char * _pstr = "pass";
const static char * _fstr = "fail";

class SUTest {
	unsigned long int _pass_count = 0;
	unsigned long int _fail_count = 0;

	const char * _tstr = nullptr;
	
	SUTest( SUTest & );					// no copy constructor
	SUTest operator = ( SUTest & );		// no assignment operator
	SUTest(){}							// no default constructor
public:
	static const char * version() { return __SUTest_VERSION; }

	SUTest( const char * );
	void init ( const char * );
	void test ( const char * description, const int flag );
	void report() const;
};

#endif /* defined(_SIMPLE_UNIT_TEST_1_0) */