// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int Sum(int a, int b, int c)
{
    cout << "Incert 2 numbers: " << endl;
    cin >> a >> b;
    c = 0;
    if (a > b)
    {
        for (i = a; i < b; i++) c = c + i;
    }
    else if (a < b)
    {
        for (i = b; i < a; i++) c = c + i;
    }
    cout << c << endl;
}
int main()
{ 
    int a, b, c;
    Sum(a, b, c);    
    return 0;
}
