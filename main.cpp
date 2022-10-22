// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <cmath>
#include <time.h>
#include <Windows.h>
using namespace std;
int Sum(int a, int b)
{
  return pow(a, b);    
}
int main()
{
    int a, b, c;
    cout << "Incert number and degree:" << endl;
    cin >> a >> b;
    c = Sum (a,b);
    cout << c << endl;
    return 0;
}
