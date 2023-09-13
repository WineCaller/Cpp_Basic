#include "io.h"

void OperationArithmetic(int Arith1, int Arith2)
{
	// int Arith1 = 10;
	// int Arith2 = 20;

	int Sum = Arith1 + Arith2;
	int Sub = Arith1 - Arith2;
	int Mul = Arith1 * Arith2;
	int Div = Arith1 / Arith2;
	int Rest = Arith1 % Arith2;

	cout << Sum << endl << Sub << endl << Mul << endl << Div << endl << Rest << endl;
}

void OperationIncreasementDecreasement()
{
	//���� ����
	int Increase = 0; // �ʱ�ȭ <<< ó����/������ �� ���
	int Decrease = 10;

	Increase = Increase + 1; // �������� �� : ������(Step)
	Decrease = Decrease - 2;

	cout << Increase << endl << Decrease << endl;

	Increase += 1; // �����
	Decrease -= 2;

	cout << Increase << endl << Decrease << endl;

	// Count : ���� - 1�� ����, ����
	Increase++;
	Decrease--;

	cout << Increase << endl << Decrease << endl;
}

void OperationComparison()
{
	// �� ������ ��� �� : ��/����, true/false, 1/0
	int Greater = 30;
	int Less = 10;

	cout << (Greater > Less) << endl; // > : greater than
	cout << (Greater < Less) << endl; // < : less than

	cout << (Greater >= Less) << endl;
	cout << (Greater <= Less) << endl;

	cout << (Greater == Less) << endl;
	cout << (Greater != Less) << endl;
}

void OperationLogic()
{
	// �� ����  
	// AND : bool ���� ��� true�̸� ����� true, �ϳ��� false�̸� ����� false
	cout << (true && true) << endl;
	cout << (true && false) << endl;

	// OR : bool ���� ��� false�̸� ����� false, �ϳ��� true �̸� ����� true
	cout << (true || true) << endl;
	cout << (true || false) << endl;

	// ��� 90�̻��̰� ��� �̻��̸� ~
	int Kor = 80;
	int Eng = 95;

	cout << (Kor >= 90 && Eng >= 90) << endl;

	cout << (false && true) << endl;

	cout << (false) << endl;

	cout << !(Kor >= 90 && Eng >= 90) << endl;
	cout << (!(Kor >= 90) && Eng >= 90) << endl;
}

void OperationBit()
{
	//��Ʈ ����
	int Bit1 = 15; // 00001111
	int Bit2 = 20; // 00010100

	int BitAnd = Bit1 & Bit2;
	// 00001111
	// 00010100
	// 00000100 = 2^0 * 0 + 2^1 * 0 + 2^2 * 1 = 4

	cout << BitAnd << endl;

	// 15 ���� ���� ��Ʈ �̵� ����
	cout << (Bit1 << 1) << endl;
	// 00001111
	// 00011110
}

void OperationThree()
{
	//���� ����
	cout << (3 > 5 ? "�ȳ�" : "�߰�") << endl;
	cout << (3 < 5 ? "�ȳ�" : "�߰�") << endl;
}