// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cmath>
using namespace std;
int IsLucky(int Lucky, int b)
{
    b = 0;
    int c = 0; int k = 0;
        for (int j = 5; j > 2; j--)
        {
            k = Lucky / pow(10, j);
            b = b + k;
            Lucky = Lucky - k * pow(10, j);
            //cout << "b: " << b << " Lucky: " << Lucky << endl;
        }
        for (int j = 2; j > 0; j--)
        {
            k = Lucky / pow(10, j);
            c = c + k;
            Lucky = Lucky - k * pow(10, j);
            //cout << "c: " << c << " Lucky: " << Lucky << endl;
        }
        c = c + Lucky;
        //cout << c << endl;
        if (b == c) cout << "Incerted number is Happy";
        else cout << "Incerted number is not Happy";
        return 0;
    
}
int main()
{
    int Lucky;
    int c = 0, b = 0;
    cout << "Incert 6-symbol number: " << endl;
    cin >> Lucky;
    IsLucky(Lucky, b);
    return 0;
}
