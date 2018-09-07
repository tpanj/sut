
#include "sut.h"

SUTest::SUTest( const char * tstr ) {
	init(tstr);
}

void SUTest::init( const char * tstr ) {
	_tstr = tstr;
	_pass_count = _fail_count = 0;
}

void SUTest::test ( const char * description, const int flag ) {
	const char * pf = nullptr;
	if (flag) {
		pf = _pstr;
		++_pass_count;
	} else {
		pf = _fstr;
		++_fail_count;
	}
	printf("%s: %s -> %s\n", _tstr, description, pf);
}

void SUTest::report() const {
	printf("%s: pass: %ld, fail: %ld\n", _tstr, _pass_count, _fail_count);
}

