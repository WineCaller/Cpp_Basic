#include "Cpp_basic.h"
#include "Ch10_Class.h"
#include "io.h"

int main()
{
	cout << "Hello Sesac!\n" << endl;

	Car Sonata(80);
	
	Sonata.DriveVelocity();
	Sonata.DriveTime();

	cout << endl << "실행 종료" << endl;
}