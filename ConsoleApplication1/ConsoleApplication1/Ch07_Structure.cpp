#include "io.h" 

void Structure()
{
    // ����ü�� ���� ����(������ Ÿ�� ����) �ǹ̷� ����, ���ο� ������ Ÿ���� ����� ��
    struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };

    inflatable People = { "Tom", 0.75, 15.235 };

    struct sesac
    {
        // ��� ����
        char name[20];
        char address[100];
        char phone[20];
        int age;
    };

    sesac BanJang;
    BanJang = { "Jane", "�����", "01012345678", 25 };

    BanJang.age = 30;

}

void Enum()
{
    // enum : ������ ������ Ÿ��
    // Sun, Mon, Tue, Wed, Thu, Fri, Sat : ������ ���
    // 0���� �����ϴ� ����� ������ ���� ������ �Ҵ�
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