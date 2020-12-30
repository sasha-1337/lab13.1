#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() 
{
	n = 0;
	a = x-1;
	s = a;
	do {
		n++;
		dod(); 
		s += a;
	} while (a > 0 && a <= 2);
}