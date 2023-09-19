#include "io.h"

#include <vector>

void VectorClass() 
{
	// ���� ����
	vector<int> vd1;      // �迭 ���� : ���� ���� ���� ��� �������� ����
	vector<int> vd2(3);   // ���� ������ ����
	vector<int> vd3(3, 2); // ���� ������ ���� ���� ��� ������
	
	vd1.push_back(10);

	cout << vd1.front() << endl;

	vd1.push_back(30);

	cout << vd1.at(1) << endl;

	vd1.push_back(200);

	cout << vd1.size() << endl;

	vd1.pop_back();

	cout << vd1.size() << endl;

	cout << vd1.capacity() << endl;
}



