#include "test1p.h"

void test_free(void *p) {
	free(p);
}

void osvobodi_esli_ne_0(int*x, int m) {
	if (m != 0) {
		test_free(x);}}

