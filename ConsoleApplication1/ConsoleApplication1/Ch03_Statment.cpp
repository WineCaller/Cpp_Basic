#include "io.h"

void StatmentIf()
{
    // if
    int Total = 70;
    // ������ 60 �̻��̸� �հ�
    if (Total >= 60)
    {
        cout << "�հ�" << endl;
    }
    // ������ 60 �̻��̸� "�հ�" ��� �ƴϸ� "���հ�"
    int Total2 = 50;

    if (Total2 >= 60)
    {
        cout << "�հ�" << endl;
    }
    else
    {
        cout << "���հ�" << endl;
    }
    // ������ 90 �̻��̸� "��", 80�̻��̸� "��", �ƴϸ� "�����"
    int Total3 = 85;

    if (Total3 >= 90)
    {
        cout << "��" << endl;
    }
    else if (Total3 >= 80)
    {
        cout << "��" << endl;
    }
    else
    {
        cout << "�����" << endl;
    }

    // 3���� ��������� 60�̻��̸� �հ�, �ƴϸ� ���հ�
    // �� ����� ������ 40�̸��̸� ����
    int Sub1 = 60;
    int Sub2 = 60;
    int Sub3 = 60;
    int Average = (Sub1 + Sub2 + Sub3) / 3;

    // ��� 60��, ����� ���� 40 �̻��̸� �հ�
    // ��� >=60, ����1>=40, ����2>=40, ����3>=40

    if (Average >= 60 && Sub1 >= 40 && Sub2 >= 40 && Sub3 >= 40)
    {
        cout << "�հ�" << endl;
    }
    else
    {
        cout << "���հ�" << endl;
    }

    int Sub4 = 1;
    int Sub5 = 0;
    int Sub6 = 0;


    cout << "1 ���� ������ �Է����ּ��� : ";
    cin >> Sub4;
    cout << "2 ���� ������ �Է����ּ��� : ";
    cin >> Sub5;
    cout << "3 ���� ������ �Է����ּ��� : ";
    cin >> Sub6;

    int AverageIn = (Sub4 + Sub5 + Sub6) / 3;

    if (AverageIn >= 60 && Sub4 >= 40 && Sub5 >= 40 && Sub6 >= 40)
    {
        cout << "�հ�" << endl;
    }
    else
    {
        cout << "���հ�" << endl;
    }
}

void StatmentSwitch()
{
    // ���� ��ȣ : 1-C++, 2-�𸮾���, 3-VR
    int SubNumer = 0;
    cout << "�����ȣ �Է�  : ";
    cin >> SubNumer;

    switch (SubNumer)
    {
    case 1:
        cout << "C++" << endl;
        break; // �ڵ� ���� ���������ٴ� �ǹ�
    case 2:
        cout << "�𸮾� ����" << endl;
        break;
    case 3:
        cout << "VR" << endl;
        break;
    default:
        cout << "�ùٸ� �����ȣ�� �Է����ּ���." << endl;
    }

    if (SubNumer == 1)
    {
        cout << "C++" << endl;
    }
    else if (SubNumer == 2)
    {
        cout << "�𸮾� ����" << endl;
    }
    else if (SubNumer == 3)
    {
        cout << "VR" << endl;
    }
    else
    {
        cout << "�ùٸ� �����ȣ�� �Է����ּ���." << endl;
    }
}

void StatmentReiteration()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a < b)
    {
        cout << "a<b �񱳽ĸ� �ٷ�� ���๮" << endl;

        if (b < c)
        {
            cout << "��ø IF" << endl;
        }
    }

    if (a < b && b < c) {
        cout << "And ���� IF" << endl;
    }
}

void StatmentInteger()
{
    // integer, iterate(iterable) : �ݺ��ϴ�

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

    for (int i = 2; i <= 9; i++) // 1���� ������ (����)
    {
        for (int j = 1; j <= 9; j++) // 2���� ������ (���)
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
        cout << "�α���";
        cin >> InputId;

        if (InputId == IdNumber)
        {
            cout << "�������" << endl;
            break;
        }
        else
        {
            cout << "���Է� �䱸" << endl;
        }

    }

    cout << "�Ϸ�" << endl;
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

// ���� ���� GlobalValue
int GlobalValue = 10;

void VarScope(int Number)
{
    int FunctionValue = 20;

    if (true)
    {
        int BlockValue = 30;

        cout << "�����Լ��� : " << GlobalValue << endl;
        cout << "�Լ����������� : " << FunctionValue << endl;
        cout << "������������� : " << BlockValue << endl;
        cout << "�Ķ���� �� : " << Number << endl;

    }

    cout << "�����Լ��� : " << GlobalValue << endl;
    cout << "�Լ����������� : " << FunctionValue << endl;
    // cout << "������������� : " << BlockValue << end;
    cout << "�Ķ���� �� : " << Number << endl;
}