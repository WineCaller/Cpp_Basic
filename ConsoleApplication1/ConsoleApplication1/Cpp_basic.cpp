#include "Cpp_basic.h"
#include "Ch10_Class.h"
#include "io.h"
#include "Animal.h"
#include "Vehicle.h"
#include "Bike.h"

int main()
{
	cout << "Hello Sesac!\n" << endl;

	
	// class ���� ����(����)

	Animal* Dog = new Animal;
	Dog->PrintFinger();
	
	delete Dog;

	// �ڽ� Ŭ���� ����
	Bike Moto(2019, 2000000);
	
	
	cout << endl << "���� ����" << endl;
}