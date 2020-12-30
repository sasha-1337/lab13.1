#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsVar;

void nsDod::dod() {
	a *= ((pow((-1), n) * pow((x - 1), (n + 1))) / ((n * 1. + 1)));
}