// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
// Написати функцію для переведення числа, записаного у двійковому вигляді, у десяткову систему
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cmath>
using namespace std;
int ten(int n, int sum, int key)
{    
    for (int i = n; i > 0; i--)
    {
        int temp, t;
        t = pow(10, i - 1);
        temp = key / t;
        sum += temp * pow(2, i - 1);
        key = key - temp * pow(10, i - 1); 
        cout << temp << " " << sum << " " << key << endl;
    }
    return sum;
}

int main()
{
    int temp, t, key, n = 1, sum;
    cout << "Incert number in 2-s sistem: " << endl;
    cin >> key; 
    while ((key /= 10) > 0) n++;
    cout << n << endl;
    sum = ten(n, 0, key);
    cout << "The number in 10-s system: " << sum;
    return 0;
}
