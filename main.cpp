// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
// Написати функцію, що реалізує алгоритм лінійного пошуку заданого ключа в одновимірному масиві.
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int Search(int arr[10], int Key)
{
    for (int i = 0; i < 10; i++)
    {        
        if (arr[i] == Key) cout << "Key is found in position:  " << i << endl;
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int Key;    
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1 + rand() % 98; 
        cout << arr[i] << " ";
    }
    cout << "Incert a Key: " << endl;
    cin >> Key;
    Search(arr, Key);
    return 0;
}
