// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
// Написати функцію для переведення числа, записаного у двійковому вигляді, у десяткову систему
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cmath>
using namespace std;
int ten(int sum, long long key)
{   
    long long t;
    int i = 0;
    while (key > 0)
    {       
        t = key / 10;        
        if (t == 1) sum += pow(2, i);
        i += 1;
        key /= 10;
    }
    return sum;
}

int main()
{
    long long t, key;    
    cout << "Incert number in 2-s sistem: " << endl;
    cin >> key;    
    int sum = ten(0, key);
    cout << "The number in 10-s system: " << sum;
    return 0;
}
