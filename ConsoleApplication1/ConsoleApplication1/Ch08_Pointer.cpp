#include "io.h"

void PinterDefine()
{
	int a = 10;

	cout << " a :" << a << endl;
	cout << " &a :" << &a << endl; // &a : &(�ּ�����) ����

	int* pa = &a; // ������ ������ �ּҰ� ����

	cout << " pa :" << pa << endl;  // �ּ� ���
	cout << " *pa :" << *pa << endl; // �� ���

	cout << " pa + 1 :" << pa + 1 << endl; // 1 ���ϸ� ��ĭ �ּ�
	cout << " *pa + 1 :" << *pa + 1 << endl; 
	cout << " *(pa + 1) :" << *(pa + 1) << endl; 

	int** ppa = &pa; // �����͸� �����ϴ� ������

	cout << " ppa :" << ppa << endl;
	cout << " *ppa :" << *ppa << endl;
	cout << " **ppa :" << **ppa << endl;

	int Array[3] = { 1,5,9 };
	int* pArray = Array;

	cout << " Array :" << Array << endl; // �迭�� ù��° ���Ұ� �ִ� �ּ� ����
	cout << " pArray :" << pArray << endl;
	
	cout << " Array[0] :" << Array[1] << endl;
	cout << " pArray[0] :" << pArray[1] << endl;

	cout << " *Array :" << *Array << endl;
	cout << " *pArray :" << *pArray << endl;

	cout << " Array + 1 :" << Array + 1 << endl;
	cout << " pArray + 1 :" << pArray + 1 << endl;

	cout << " *Array + 1 :" << *Array + 1 << endl;
	cout << " *pArray + 1 :" << *pArray + 1<< endl;

	cout << " *(Array + 1) :" << *(Array + 1) << endl;
	cout << " *(pArray + 1) :" << *(pArray + 1) << endl;
}