#include "io.h" 

void BultipleCalcaul()
{

    cout << "반복횟수를 입력하세죠" << endl;

    // for (int i=0, i < Loopcount; (1) )
}

void Receipt()
{
    int TotelPrice, Count, Price, Number, SumPrice = 0;

    cout << "구입 총 금액 : " << endl;
    cin >> TotelPrice;
    cout << "물건의 종류 수 : " << endl; // 반복 횟수
    cin >> Count;

    for (int i = 1; i <= Count; i++)
    {
        cout << i << "번 물건 가격 : " << endl;
        cin >> Price;
        cout << i << "번 물건 개수 : " << endl;
        cin >> Number;
        cout << i << "번 물건 총 가격 : " << Price * Number << endl;

        SumPrice += Price * Number;

    }

    if (TotelPrice == SumPrice)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

}

void ShootingStars()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
