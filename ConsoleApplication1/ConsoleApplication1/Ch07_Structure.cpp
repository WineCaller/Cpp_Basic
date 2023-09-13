#include "io.h" 

void Structure()
{
    // 구조체의 서술 정의(데이터 타입 생성) 의미로 접근, 새로운 데이터 타입을 만드는 것
    struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };

    inflatable People = { "Tom", 0.75, 15.235 };

    struct sesac
    {
        // 멤버 변수
        char name[20];
        char address[100];
        char phone[20];
        int age;
    };

    sesac BanJang;
    BanJang = { "Jane", "서울시", "01012345678", 25 };

    BanJang.age = 30;

}

void Enum()
{
    // enum : 열거형 데이터 타입
    // Sun, Mon, Tue, Wed, Thu, Fri, Sat : 열거형 상수
    // 0부터 시작하는 양수를 열거형 상스의 값으로 할당
    enum day { Sun, Mon, Tue, Wed = 10, Thu, Fri, Sat };

    day DayName;
    DayName = Sat;

    switch (DayName)
    {
    case Sun:
        cout << "Bicycle";
        break;
    case Mon:
        cout << "work";
        break;
    case Tue:
        cout << "work";
        break;
    case Wed:
        cout << "work";
        break;
    case Thu:
        cout << "work";
        break;
    case Fri:
        cout << "work";
        break;
    case Sat:
        cout << "party";
        break;

    }

    cout << DayName << endl;
}

void ChangeValue(int a)
{
    a = 0;
}

int ChangeValue2()
{
    return 0;
}

int c = 10;

void CallByValue()
{
    // ChangeValue(c);
    c = ChangeValue2();
}