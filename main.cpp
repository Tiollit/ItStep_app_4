// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
using namespace std;
int Sum(int a, int b)
{    
    int c = 0;
    if (a > b)
    {
        for (int i = b; i < a; i++) c = c + i;
    }
    else if (a < b)
    {
        for (int i = a; i < b; i++) c = c + i;
    } 
    if (a > b) c = c - b;
    else if (a < b) c = c - a;
    cout << c << endl;
    return c;
}
int main()
{ 
    int a, b, c;
    cout << "Incert 2 numbers: " << endl;
    cin >> a >> b;
    Sum(a, b);     
    return 0;
}
