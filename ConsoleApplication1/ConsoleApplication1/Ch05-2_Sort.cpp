#include "io.h"

//Bubble sort ���� : �����Ѱ� �ϳ��� ��, ���ؼ� ������ �ε����� ���� ������ ũ�� �ε����� ū������ ��ü�ذ��鼭 �����Ѵ�. 


void BubbleSort()
{
    int Number[10] = { 3,9,5,8,10,1,7,4,2,6 };
    int temp;

    for (int i = 9; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            // �� 
            if (Number[j] > Number[j + 1])
            {
                // ��ȯ(swap)
                temp = Number[j];
                Number[j] = Number[j + 1];
                Number[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << Number[i] << " : ";
    }

    cout << endl;
}