#include "io.h" 



void AutomationOven()
{
    int Time1, Time2, Time3;

    while (true)
    {
        cout << "���� �ø� �Է����ּ���." << endl;
        cin >> Time1;

        if (Time1 >= 0 && Time1 <= 23)
        {
            break;
        }
        else
        {
            cout << "�ùٸ� �ð��� �Է����ּ���" << endl;
        }
    }
    while (true)
    {
        cout << "���� �и� �Է����ּ���." << endl;
        cin >> Time2;

        if (Time2 >= 0 && Time2 <= 59)
        {
            break;
        }
        else
        {
            cout << "�ùٸ� �ð��� �Է����ּ���" << endl;
        }
    }

    while (true)
    {
        cout << "������ �ʿ��� �ð��� �Է����ּ���." << endl;
        cin >> Time3;

        if (Time3 >= 0 && Time3 <= 1000)
        {
            break;
        }
        else
        {
            cout << "�ùٸ� �ð��� �Է����ּ���" << endl;
        }
    }

    int Add = (Time2 + Time3) / 60;
    int FinshMiunte = (Time2 + Time3) % 60;

    cout << Add << ":" << FinshMiunte << endl;



}

void Quadrant()
{
    int Coordinates1;
    int Coordinates2;

    cout << "X��ǥ�� �Է����ּ���." << endl;
    cin >> Coordinates1;
    cout << "Y��ǥ�� �Է����ּ���." << endl;
    cin >> Coordinates2;

    if ((Coordinates1 > 0) && (Coordinates2 > 0))
    {
        cout << "1��и�" << endl;
    }
    else if ((Coordinates1 < 0) && (Coordinates2 > 0))
    {
        cout << "2��и�" << endl;
    }
    else if ((Coordinates1 < 0) && (Coordinates2 < 0))
    {
        cout << "3��и�" << endl;
    }
    else if ((Coordinates1 > 0) && (Coordinates2 < 0))
    {
        cout << "4��и�" << endl;
    }
    else
    {
        cout << "����" << endl;
    }
}

void LeapYear()
{
    int Year;

    cout << "������ �Է����ּ���.";
    cin >> Year;

    // year % 4 == 0 : 4�� ���
    // year % 100 != 0 : 100�� ����� �ƴ�
    // (year % 4 == 0) && (year % 100 != 0)
    // yeat % 400 == 0 : 400�� ���
    //((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0

    if (((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0))
    {
        cout << "����" << endl;
    }
    else
    {
        cout << "���" << endl;
    }
}

void SizeComparison()
{
    int Value1 = 0;
    int Value2 = 0;
    cout << "ù��° ���� �Է����ּ��� : ";
    cin >> Value1;
    cout << "�ι�° ���� �Է����ּ��� : ";
    cin >> Value2;

    if (Value1 > Value2)
    {
        cout << ">" << endl;
    }
    else if (Value1 < Value2)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
}
