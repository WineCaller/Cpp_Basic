#include "io.h"

void CountNumber()
{
    int Counter = 0;
    cout << "숫자 개수를 입력해주세요 : ";
    cin >> Counter;

    int* pNumber = new int[Counter];

    for (int i = 0; i < Counter; i++)
    {
        cout << "수 데이터를 입력해주세요 : ";
        cin >> pNumber[i];
    }

    int FindNmber;
    cout << "찾고 싶은 수를 입력하시오 : ";
    cin >> FindNmber;

    int FindCount = 0;
    for (int i = 0; i < Counter; i++)
    {
        //if (Number[i] == FindNmber)
        {
            FindCount++;
        }
    }

    cout << "찾는 수의 개수는" << FindCount << "개 입니다." << endl;
}

void LessNnumber()
{
    int Counter;
    cout << "숫자 개수를 입력해주세요 : ";
    cin >> Counter;

    int FindNmber;
    cout << "기준 수를 입력하시오 : ";
    cin >> FindNmber;

    int Number[100];
    for (int i = 0; i < Counter; i++)
    {
        cout << "수 데이터를 입력해주세요 : ";
        cin >> Number[i];
    }
    for (int i = 0; i < Counter; i++)
    {
        if (FindNmber > Number[i])
            cout << Number[i] << ",";
    }
    cout << endl;
}

void NotSubmitted()
{
    int Student = 0;
    cout << "전체 학생의 수를 입력해주세요 : ";
    cin >> Student;

    int Missing;
    cout << "미제출 학생 수 : ";
    cin >> Missing;

    // 전체 학생의 번호 데이터 set
    int TotalStudent[100];
    for (int i = 0; i < Student; i++)
    {
        TotalStudent[i] = i + 1;
    }

    //과제 제출한 학생 번호 set
    int SubmittedStudent[100];
    for (int i = 0; i < (Student - Missing); i++)
    {
        cout << "제출한 학생 번호를 입력해주세요." << endl;
        cin >> SubmittedStudent[i];
    }

    // 제출 확인용 배열 변수 Set
    bool Check[100];
    for (int i = 0; i < Student; i++)
    {
        Check[i] = false;
    }

    // 제출한 학생, 미제출 학생 구분 - true/false
    for (int i = 0; i < Student - Missing; i++)
    {
        for (int j = 0; j < Student; j++)
        {
            if (SubmittedStudent[i] == TotalStudent[j])
            {
                Check[i] = 1;
            }
        }
    }

    // 미제출 학생 번호 추출
    for (int i = 0; i < Student; i++)
    {
        if (Check[i] == false)
        {
            cout << i + 1 << "번 미제출" << endl;
        }
    }
}

void MinMax()
{
    int Number = 0;
    cout << "숫자 개수를 입력해주세요 : ";
    cin >> Number;

    int ArbitraryNumber[100];
    for (int i = 0; i < Number; i++)
    {
        cout << "수 데이터를 입력해주세요 : ";
        cin >> ArbitraryNumber[i];
    }

    int temp;

    for (int i = Number; i > 0; i--) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (ArbitraryNumber[j] > ArbitraryNumber[j + 1])
            {
                temp = ArbitraryNumber[j];
                ArbitraryNumber[j] = ArbitraryNumber[j + 1];
                ArbitraryNumber[j + 1] = temp;
            }
        }
    }
    cout << ArbitraryNumber[1] << "  " << ArbitraryNumber[Number];
}