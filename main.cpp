// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int perfect(int a, int b)
{
    cout << "Incert interval: " << endl;
    cin >> a >> b;
    cout << "Perfect numbers from interval is: ";
    int c = 0;
    if (a > b)
    {
        for (int i = b; i < a; i++)
        {
            for (int j = 1; j < i; j++)
            {                
                if (i % j == 0) ñ = ñ + j;
            }
            if (i / c == 1) cout << i << " ";            
        }
    }
    return 0;
}
int main()
{
    int a, b, c;
    perfect(a, b);
    return 0;
}
