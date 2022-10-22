// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
void RandArray(int arr[], const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}
void PrintArray(int arr[], const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main()
{
    srand(time(0));
    const uint32_t size = 5;
    const uint32_t size2 = 3;
    int arr[size];
    int arr2[size2];
    RandArray(arr, size);
    PrintArray(arr, size);
    RandArray(arr2, size2);
    PrintArray(arr2, size2);
    return 0;
}
