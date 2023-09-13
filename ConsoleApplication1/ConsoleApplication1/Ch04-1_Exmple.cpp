#include "io.h" 



void AutomationOven()
{
    int Time1, Time2, Time3;

    while (true)
    {
        cout << "현재 시를 입력해주세요." << endl;
        cin >> Time1;

        if (Time1 >= 0 && Time1 <= 23)
        {
            break;
        }
        else
        {
            cout << "올바른 시간을 입력해주세요" << endl;
        }
    }
    while (true)
    {
        cout << "현재 분를 입력해주세요." << endl;
        cin >> Time2;

        if (Time2 >= 0 && Time2 <= 59)
        {
            break;
        }
        else
        {
            cout << "올바른 시간을 입력해주세요" << endl;
        }
    }

    while (true)
    {
        cout << "조리에 필요한 시간을 입력해주세요." << endl;
        cin >> Time3;

        if (Time3 >= 0 && Time3 <= 1000)
        {
            break;
        }
        else
        {
            cout << "올바른 시간을 입력해주세요" << endl;
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

    cout << "X좌표를 입력해주세요." << endl;
    cin >> Coordinates1;
    cout << "Y좌표를 입력해주세요." << endl;
    cin >> Coordinates2;

    if ((Coordinates1 > 0) && (Coordinates2 > 0))
    {
        cout << "1사분면" << endl;
    }
    else if ((Coordinates1 < 0) && (Coordinates2 > 0))
    {
        cout << "2사분면" << endl;
    }
    else if ((Coordinates1 < 0) && (Coordinates2 < 0))
    {
        cout << "3사분면" << endl;
    }
    else if ((Coordinates1 > 0) && (Coordinates2 < 0))
    {
        cout << "4사분면" << endl;
    }
    else
    {
        cout << "원점" << endl;
    }
}

void LeapYear()
{
    int Year;

    cout << "연도를 입력해주세요.";
    cin >> Year;

    // year % 4 == 0 : 4의 배수
    // year % 100 != 0 : 100의 배수가 아님
    // (year % 4 == 0) && (year % 100 != 0)
    // yeat % 400 == 0 : 400의 배수
    //((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0

    if (((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0))
    {
        cout << "윤년" << endl;
    }
    else
    {
        cout << "평년" << endl;
    }
}

void SizeComparison()
{
    int Value1 = 0;
    int Value2 = 0;
    cout << "첫번째 값을 입력해주세요 : ";
    cin >> Value1;
    cout << "두번째 값을 입력해주세요 : ";
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
