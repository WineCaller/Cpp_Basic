#include "io.h"

void CountNumber()
{
    int Counter = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;

    // int Number[Counter];

    for (int i = 0; i < Counter; i++)
    {
        cout << "�� �����͸� �Է����ּ��� : ";
        //cin >> Number[i];
    }

    int FindNmber;
    cout << "ã�� ���� ���� �Է��Ͻÿ� : ";
    cin >> FindNmber;

    int FindCount = 0;
    for (int i = 0; i < Counter; i++)
    {
        //if (Number[i] == FindNmber)
        {
            FindCount++;
        }
    }

    cout << "ã�� ���� ������" << FindCount << "�� �Դϴ�." << endl;
}

void LessNnumber()
{
    int Counter;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;

    int FindNmber;
    cout << "���� ���� �Է��Ͻÿ� : ";
    cin >> FindNmber;

    int Number[100];
    for (int i = 0; i < Counter; i++)
    {
        cout << "�� �����͸� �Է����ּ��� : ";
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
    cout << "��ü �л��� ���� �Է����ּ��� : ";
    cin >> Student;

    int Missing;
    cout << "������ �л� �� : ";
    cin >> Missing;

    // ��ü �л��� ��ȣ ������ set
    int TotalStudent[100];
    for (int i = 0; i < Student; i++)
    {
        TotalStudent[i] = i + 1;
    }

    //���� ������ �л� ��ȣ set
    int SubmittedStudent[100];
    for (int i = 0; i < (Student - Missing); i++)
    {
        cout << "������ �л� ��ȣ�� �Է����ּ���." << endl;
        cin >> SubmittedStudent[i];
    }

    // ���� Ȯ�ο� �迭 ���� Set
    bool Check[100];
    for (int i = 0; i < Student; i++)
    {
        Check[i] = false;
    }

    // ������ �л�, ������ �л� ���� - true/false
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

    // ������ �л� ��ȣ ����
    for (int i = 0; i < Student; i++)
    {
        if (Check[i] == false)
        {
            cout << i + 1 << "�� ������" << endl;
        }
    }
}

void MinMax()
{
    int Number = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Number;

    int ArbitraryNumber[100];
    for (int i = 0; i < Number; i++)
    {
        cout << "�� �����͸� �Է����ּ��� : ";
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