#include "Cpp_basic.h"
#include "Ch10_Class.h"
#include "io.h"
#include "Animal.h"
#include "Vehicle.h"
#include "Bike.h"
#include "Auto.h"
#include "Arithmatic.h"
#include "Atv.h"

int main()
{
    std::cout << "Hello World!\n";

    // class 정적 선언
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;

    // class 동적 선언(생성)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    // 자식 클래스 생성
    Atv Moto;

    // 상속받은 Bike class의 멤버
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class 멤버
    Moto.PrintPrice();

    // 함수 오버로딩
    Arithmatic Expression;

    Expression.Sum(50);

    Expression.Sum(50.123f);

    Expression.Sum(60, 70);

    // 함수 오버라이딩
    Moto.Print();

    // 생성자가 명시적으로 선언
    // 자식 클래스 선언 : 명시적 선언
    cout << "---------------------------------" << endl;
    
    Auto Mobile();

    Auto Avante(2024, 10000000);

    cout << "---------------------------------" << endl;


    ArrayClass();

    cout << "---------------------------------" << endl;

    StringClass();

    cout << "---------------------------------" << endl;

    VectorClass();

    cout << "---------------------------------" << endl;

    //Mobile().PrintPrice();
}