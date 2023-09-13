#include "io.h"

void StatmentIf()
{
    // if
    int Total = 70;
    // 총점이 60 이상이면 합격
    if (Total >= 60)
    {
        cout << "합격" << endl;
    }
    // 총점이 60 이상이면 "합격" 출력 아니면 "불합격"
    int Total2 = 50;

    if (Total2 >= 60)
    {
        cout << "합격" << endl;
    }
    else
    {
        cout << "불합격" << endl;
    }
    // 총점이 90 이상이면 "수", 80이상이면 "우", 아니면 "재수강"
    int Total3 = 85;

    if (Total3 >= 90)
    {
        cout << "수" << endl;
    }
    else if (Total3 >= 80)
    {
        cout << "우" << endl;
    }
    else
    {
        cout << "재수강" << endl;
    }

    // 3과목 평균점수가 60이상이면 합격, 아니면 불합격
    // 각 과목당 점수가 40미만이면 과락
    int Sub1 = 60;
    int Sub2 = 60;
    int Sub3 = 60;
    int Average = (Sub1 + Sub2 + Sub3) / 3;

    // 평균 60점, 과목당 점수 40 이상이면 합격
    // 평균 >=60, 과목1>=40, 과목2>=40, 과목3>=40

    if (Average >= 60 && Sub1 >= 40 && Sub2 >= 40 && Sub3 >= 40)
    {
        cout << "합격" << endl;
    }
    else
    {
        cout << "불합격" << endl;
    }

    int Sub4 = 1;
    int Sub5 = 0;
    int Sub6 = 0;


    cout << "1 과목 점수를 입력해주세요 : ";
    cin >> Sub4;
    cout << "2 과목 점수를 입력해주세요 : ";
    cin >> Sub5;
    cout << "3 과목 점수를 입력해주세요 : ";
    cin >> Sub6;

    int AverageIn = (Sub4 + Sub5 + Sub6) / 3;

    if (AverageIn >= 60 && Sub4 >= 40 && Sub5 >= 40 && Sub6 >= 40)
    {
        cout << "합격" << endl;
    }
    else
    {
        cout << "불합격" << endl;
    }
}

void StatmentSwitch()
{
    // 과목 번호 : 1-C++, 2-언리얼엔진, 3-VR
    int SubNumer = 0;
    cout << "과목번호 입력  : ";
    cin >> SubNumer;

    switch (SubNumer)
    {
    case 1:
        cout << "C++" << endl;
        break; // 코드 블럭을 빠저나간다는 의미
    case 2:
        cout << "언리얼 엔진" << endl;
        break;
    case 3:
        cout << "VR" << endl;
        break;
    default:
        cout << "올바른 과목번호를 입력해주세요." << endl;
    }

    if (SubNumer == 1)
    {
        cout << "C++" << endl;
    }
    else if (SubNumer == 2)
    {
        cout << "언리얼 엔진" << endl;
    }
    else if (SubNumer == 3)
    {
        cout << "VR" << endl;
    }
    else
    {
        cout << "올바른 과목번호를 입력해주세요." << endl;
    }
}

void StatmentReiteration()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a < b)
    {
        cout << "a<b 비교식만 다루는 실행문" << endl;

        if (b < c)
        {
            cout << "중첩 IF" << endl;
        }
    }

    if (a < b && b < c) {
        cout << "And 연산 IF" << endl;
    }
}

void StatmentInteger()
{
    // integer, iterate(iterable) : 반복하다

    for (int i = 0; i < 10; i++)
    {
        cout << i;
    }

    cout << endl;

    int StepSum = 0;
    for (int i = 1; i <= 10; i++)
    {
        StepSum = StepSum + i;

        cout << StepSum << " : ";
    }

    cout << endl;

    int StepSum2 = 0;
    for (int i = 1; i <= 10; i += 2)
    {
        StepSum2 = StepSum2 + i;

        cout << StepSum2 << " : ";
    }

    cout << endl;

    for (int i = 1; i <= 9; i++)
    {
        cout << 2 * i << " : ";
    }

    cout << endl;

    for (int i = 2; i <= 9; i++) // 1차원 데이터 (선형)
    {
        for (int j = 1; j <= 9; j++) // 2차원 데이터 (평면)
        {
            cout << i * j << " : ";
        }
        cout << endl;
    }


    int Loopnumber = 0;
    while (Loopnumber <= 10)
    {
        cout << Loopnumber << " : ";

        Loopnumber++;
    }

    cout << endl;
}

void StatmentWhile()
{
    int IdNumber = 123456;
    int InputId = 0;

    while (true)
    {
        cout << "로그인";
        cin >> InputId;

        if (InputId == IdNumber)
        {
            cout << "어서오세요" << endl;
            break;
        }
        else
        {
            cout << "재입력 요구" << endl;
        }

    }

    cout << "완료" << endl;
}

int GuGuDan(int Dan)
{
    int result = 0;

    for (int i = 1; i <= 9; i++)
    {
        result += Dan * i;
    }

    return result;
}

// 전역 변수 GlobalValue
int GlobalValue = 10;

void VarScope(int Number)
{
    int FunctionValue = 20;

    if (true)
    {
        int BlockValue = 30;

        cout << "전역함수값 : " << GlobalValue << endl;
        cout << "함수지역변수값 : " << FunctionValue << endl;
        cout << "블록지역변수값 : " << BlockValue << endl;
        cout << "파라미터 값 : " << Number << endl;

    }

    cout << "전역함수값 : " << GlobalValue << endl;
    cout << "함수지역변수값 : " << FunctionValue << endl;
    // cout << "블록지역변수값 : " << BlockValue << end;
    cout << "파라미터 값 : " << Number << endl;
}