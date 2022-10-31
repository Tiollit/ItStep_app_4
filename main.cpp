// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
// Написати функцію, що реалізує алгоритм бінарного пошуку заданого ключа в одновимірному масиві.
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int look(int , int )
{
   
}

int main()
{
    srand(time(0));
    int key;
    int arr[10];
    int a, b, mid;   
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }    
    cout << "Incert the looking key: " << endl;
    cin >> key;    
    look() ;
    return 0;
}
