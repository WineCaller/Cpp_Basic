#include "io.h"
#include "Animal.h"

Animal::Animal()
{
	Leg = 2;
	Finger = 10;
}

void Animal::PrintLeg()
{
	cout << Leg << endl;
}

void Animal::PrintFinger()
{
	cout << Finger << endl;
}