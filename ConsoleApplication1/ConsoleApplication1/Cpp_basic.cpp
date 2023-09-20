#include "Cpp_basic.h"
#include "Ch10_Class.h"
#include "io.h"
#include "Animal.h"
#include "Vehicle.h"
#include "Bike.h"
#include "Auto.h"
#include "Arithmatic.h"
#include "Atv.h"

#include "Ch14_VirtualParent.h"
#include "Ch15_PureVirtualChlid.h"
#include "Ch15_PureVirtualParent.h"

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

    /*VirtualParent* Parent = new VirtualParent;
    VirtualChild* Child = new VirtualChild;

    Parent->PrintClass();
    Child->PrintClass();

    Parent = Child;

    Parent->PrintClass();*/

    // PureVirtualParent PureParent; => �߻� Ŭ������ �ܵ����� ��ü ������ �� ����
    //PureVirtualChild PureChild;
    //PureChild.Print();
    //PureChild.PrintClass();

    //cout << SumN(3, 2) << endl;
    //cout << SumN(3.324f, 2.645f) << endl;
    
    cout << SumTy(10, 50) << endl;
    cout << SumTy(3.873, 4.629) << endl;

    //Mobile().PrintPrice();
}