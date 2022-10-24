// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int main()
{
    srand(time(0));
    const int a = 4;
    const int b = 5;
    int arr[a][b];
    int arr2[a][b];
    int c, d, f;
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Incert number" << endl;
    cin >> c;
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            d = j + c;
                while (d >= b)
                {
                    d = d - b;
                }                
                arr2[i][d] = arr[i][j];                
        }
        cout << endl;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cout << arr2[i][j] << " ";
        cout << endl;
    }

    return 0;
}
