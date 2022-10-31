// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
// Написати функцію, що реалізує алгоритм бінарного пошуку заданого ключа в одновимірному масиві.
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int look(int arr[], int l, int r, int key)
{
    int mid = 0;                                    // Цикл взяв з інету
    while (1)
    {
        mid = (l + r) / 2;
        if (key < arr[mid]) r = mid - 1;
        else if (key > arr[mid]) l = mid + 1;
        else return mid;
        if (l > r) return -1;
    }
}

int main()
{
    srand(time(0));
    int key = 0;
    int arr[10];
    int l, r, mid, temp, index = 0;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    } 
    cout << endl;
    for (int i = 0; i < 10; i++)        // сортування масиву за зростанням
    {
        for (int j = 0; j < 9; j++) 
        {
            if (arr[j] > arr[j + 1])    // змінюємо місціми позиції в масиві
            {               
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)        
    {        
        cout << arr[i] << " ";
    }
    cout << "Incert the looking key: " << endl;
    cin >> key;    
    index = look(arr, 0, 10, key);
    if (index >= 0) cout << "Searching key is in position: " << index << ". Or in numeric position: " << index + 1;
    else cout << "There is no searching key in the array";
    return 0;
}
