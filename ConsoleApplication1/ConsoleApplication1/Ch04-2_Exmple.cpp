#include "io.h" 

void BultipleCalcaul()
{

    cout << "�ݺ�Ƚ���� �Է��ϼ���" << endl;

    // for (int i=0, i < Loopcount; (1) )
}

void Receipt()
{
    int TotelPrice, Count, Price, Number, SumPrice = 0;

    cout << "���� �� �ݾ� : " << endl;
    cin >> TotelPrice;
    cout << "������ ���� �� : " << endl; // �ݺ� Ƚ��
    cin >> Count;

    for (int i = 1; i <= Count; i++)
    {
        cout << i << "�� ���� ���� : " << endl;
        cin >> Price;
        cout << i << "�� ���� ���� : " << endl;
        cin >> Number;
        cout << i << "�� ���� �� ���� : " << Price * Number << endl;

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
