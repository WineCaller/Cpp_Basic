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

    // class ���� ����
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;

    // class ���� ����(����)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    // �ڽ� Ŭ���� ����
    Atv Moto;

    // ��ӹ��� Bike class�� ���
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class ���
    Moto.PrintPrice();

    // �Լ� �����ε�
    Arithmatic Expression;

    Expression.Sum(50);

    Expression.Sum(50.123f);

    Expression.Sum(60, 70);

    // �Լ� �������̵�
    Moto.Print();

    // �����ڰ� ��������� ����
    // �ڽ� Ŭ���� ���� : ����� ����
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