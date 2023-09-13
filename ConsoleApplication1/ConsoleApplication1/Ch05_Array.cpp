#include "io.h"

void DefineArray()
{
    int Num = 0;

    // ����, declare(define)
    int a[3] = { 1,2,3 };
    int b[3] = { 1,2 };
    // int c[3] = {1,2,3,4}; => Syntax Error
    int d[10];

    // ����
    // d[3] = {1,2,3}
    d[0] = 1;
    d[1] = 2;
    d[2] = 3;

    // d �迭�줿��=�줿 ��=
    for (int i = 0; i < 5; i++)
    {
        cout << "c" << i;
        d[i] = i + 1;
    }

    cout << endl;

    // ��� => ����, Access
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << ",";
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << ",";
    }

    cout << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << d[i] << ",";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << d[i] << " : ";
    }

    cout << endl;

}

void TwoDimension()
{
    int number[3][2] =
    {
      {1,2},
      {3,4},
      {5,6}
    };

    // cout << number[0][0];
    // cout << number[2][1];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << number[i][j] << endl;
        }
    }
}