// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int perfect(int a, int b)
{     
    if (a > b)
    {
        for (int i = b; i < a; i++)
        {
            int c = 0;
            for (int j = 1; j <= i / 2; j++)
            {                
                if (i % j == 0) c += j;
            }
            if (i == c) cout << i << " ";            
        }
    }
    else if (a < b)
    {
        for (int i = a; i < b; i++)
        {
            int c = 0;
            for (int j = 1; j <= i / 2; j++)
            {
                if (i % j == 0) c += j;
            }
            if (i == c) cout << i << " ";
        }
    }
    return 0;
}
int main()
{
    int a, b, c;
    cout << "Incert interval: " << endl;
    cin >> a >> b;
    cout << "Perfect numbers from interval is: ";    
    perfect(a, b);
    return 0;
}
