#include "io.h"

void IndexChar()
{
    char word[20];
    int Number;

    cout << "���ϴ� �ܾ �Է����ּ���. ";
    cin >> word;

    cout << "����� ���ϴ� �ڸ� ���� �Է����ּ���. ";
    cin >> Number;

    cout << word[Number - 1];
}

void AlphaNumber()
{
    char Word[20];
    int WordSize = sizeof(Word) - 1;

    cout << "���ϴ� �ܾ �Է����ּ���. ";
    cin >> Word;

    char Alpha[] = { "abcdefghijklmnopqrstuvwxyz" };
    int AlphaSize = sizeof(Alpha) - 1;

    int Check[100];
    for (int i = 0; i < AlphaSize; i++)
    {
        Check[i] = -1;
    }


    for (int i = 0; i < (WordSize); i++)
    {
        for (int j = 0; j < (AlphaSize); j++)
        {
            if (Word[i] == Alpha[j])
            {
                if (Check[j] == -1)
                {
                    Check[j] = i;
                }
            }
        }
    }

    cout << WordSize << endl;
    cout << AlphaSize << endl;

    for (int i = 0; i < AlphaSize; i++)
    {
        cout << Check[i] << " ";
    }
}

