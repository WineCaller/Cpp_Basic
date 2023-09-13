#include "io.h" 

void String()
{
	char a = 'a';

	char Hello[5] = { 'H','E','L','L','O' };

	char World[6] = "WORLD"; // 큰 따옴표를 사용하면 '\0' 문자가 마지막에 포함됨. 그래서 문자갯수 + 1

	char b[] = "Hello World";

	int Size = sizeof(b);

	for (int i = 0; i < (Size - 1); i++)
	{
		cout << b[i] << endl;
	}
}