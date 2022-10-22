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
            d = i
                do d = c - d
                    while (d > i);
        }
        cout << endl;
    }

    return 0;
}
