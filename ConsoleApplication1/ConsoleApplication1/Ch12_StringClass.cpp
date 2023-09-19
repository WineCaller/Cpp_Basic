#include "io.h"
#include <string>

void StringClass()
{
	string Text1 = "Hello User";
	string Text2 = "Hello World";

	cout << (Text1 < Text2) << endl; // 알파벳 순서, 뒷순서일수록 큼
	cout << (Text1 > Text2) << endl;
	cout << (Text1 == Text2) << endl;
	cout << (Text1 + Text2) << endl; // 연결연산
	
	cout << Text1.front() << endl;
	cout << Text1.back() << endl;
	cout << Text1.size() << endl;
	cout << Text1.at(3) << endl;

	cout << Text1.append(Text2) << endl;
	cout << Text2.substr(6) << endl;
	cout << Text2.find("World") << endl;

}