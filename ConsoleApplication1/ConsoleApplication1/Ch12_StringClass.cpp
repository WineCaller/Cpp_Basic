#include "io.h"
#include <string>

void StringClass()
{
	string Text1 = "Hello User";
	string Text2 = "Hello World";

	cout << (Text1 < Text2) << endl; // ���ĺ� ����, �޼����ϼ��� ŭ
	cout << (Text1 > Text2) << endl;
	cout << (Text1 == Text2) << endl;
	cout << (Text1 + Text2) << endl; // ���Ῥ��
	
	cout << Text1.front() << endl;
	cout << Text1.back() << endl;
	cout << Text1.size() << endl;
	cout << Text1.at(3) << endl;

	cout << Text1.append(Text2) << endl;
	cout << Text2.substr(6) << endl;
	cout << Text2.find("World") << endl;

}