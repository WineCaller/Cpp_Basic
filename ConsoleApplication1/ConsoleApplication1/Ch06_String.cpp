#include "io.h" 

void String()
{
	char a = 'a';

	char Hello[5] = { 'H','E','L','L','O' };

	char World[6] = "WORLD"; // ū ����ǥ�� ����ϸ� '\0' ���ڰ� �������� ���Ե�. �׷��� ���ڰ��� + 1

	char b[] = "Hello World";

	int Size = sizeof(b);

	for (int i = 0; i < (Size - 1); i++)
	{
		cout << b[i] << endl;
	}
}