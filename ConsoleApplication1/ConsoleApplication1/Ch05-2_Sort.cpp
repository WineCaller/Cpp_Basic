#include "io.h"

//Bubble sort 개념 : 인접한것 하나씩 비교, 비교해서 작으면 인덱스가 작은 쪽으로 크면 인덱스고 큰쪽으로 교체해가면서 정렬한다. 


void BubbleSort()
{
    int Number[10] = { 3,9,5,8,10,1,7,4,2,6 };
    int temp;

    for (int i = 9; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            // 비교 
            if (Number[j] > Number[j + 1])
            {
                // 교환(swap)
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