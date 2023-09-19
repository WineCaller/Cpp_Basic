#include "io.h"
#include <array>

void ArrayClass()
{
	array<int, 3> Number = { 1,2,3 };

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(1) << endl;
}