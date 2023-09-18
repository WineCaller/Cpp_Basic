#include "Cpp_basic.h"
#include "Ch10_Class.h"
#include "io.h"
#include "Animal.h"
#include "Vehicle.h"
#include "Bike.h"

int main()
{
	cout << "Hello Sesac!\n" << endl;

	
	// class 동적 선언(생성)

	Animal* Dog = new Animal;
	Dog->PrintFinger();
	
	delete Dog;

	// 자식 클래스 생성
	Bike Moto(2019, 2000000);
	
	
	cout << endl << "실행 종료" << endl;
}