#include "Auto.h"
#include "io.h"

Auto::Auto()
{
	cout << "Auto Default Constructor" << endl;
}
Auto::Auto(int _Year, int _Price) : Vehicle(_Year, _Price)
{
	cout << "Auto Parameter Constructor" << endl;
}