#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;

	cout << fixed;
	cout << "=========================================" << endl;
	cout << "|" << setw(7) << "x  "
		<< " |" << setw(10) << "s "
		<< " |" << setw(9) << "ln(x)   "
		<< "  |" << setw(6) << "n  " << "|"
		<< endl;
	cout << "=========================================" << endl;

	x = x_p;
	while (x <= x_k) {
		sum(); 
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << s
			<< " |" << setw(10) << setprecision(2) << log(x)
			<< " |" << setw(5) << setprecision(2) << n << " |" << endl;
			cout << "-----------------------------------------" << endl;
			
		x += dx;
	}
	cin.get();
	return 0;
}