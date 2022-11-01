// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
//Написати функцію, що виводить на екран передану їй гральну карту
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cstdlib>
#include <clocale>
#include <cstdlib>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
using namespace std;

string kard(string k, string s)
{
    string arr[7][9];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == 0 && j == 0) arr[i][j] = char(218);
            else if (0 < i && i < 6 && 0 < j && j < 8) arr[i][j] = " ";
            else if (i == 6 && j == 0) arr[i][j] = char(192);
            else if (i == 0 && j == 8) arr[i][j] = char(191);
            else if (i == 6 && j == 8) arr[i][j] = char(217);
            else if (i == 0 && 0 < j && j < 8) arr[i][j] = char(196);
            else if (i == 6 && 0 < j && j < 8) arr[i][j] = char(196);
            else if (0 < i && i < 6 && j == 0) arr[i][j] = char(179);
            else if (0 < i && i < 6 && j == 8) arr[i][j] = char(179);
        }
    }
    if (k == "6") arr[1][1] = arr[5][7] = "6";
    else if (k == "7") arr[1][1] = arr[5][7] = "7";
    else if (k == "8") arr[1][1] = arr[5][7] = "8";
    else if (k == "9") arr[1][1] = arr[5][7] = "9";
    else if (k == "10")
    {
        arr[1][1] = arr[4][7] = "1";
        arr[2][1] = arr[5][7] = "0";
    }
    else if (k == "J") arr[1][1] = arr[5][7] = "J";
    else if (k == "Q") arr[1][1] = arr[5][7] = "Q";
    else if (k == "K") arr[1][1] = arr[5][7] = "K";
    else if (k == "A") arr[1][1] = arr[5][7] = "A";       
    
    /*if (s == "S") arr[3][4] = L'\u2660';
    else if (s == "C") arr[3][4] = L'\u2663';
    else if (s == "H") arr[3][4] = L'\u2665';
    else if (s == "D") arr[3][4] = L'\u2666';*/

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {            
            if (i == 3 && j == 4 && s == "S")
            {
                _setmode(_fileno(stdout), _O_U16TEXT);
                wprintf(L"\u2660");
                _setmode(_fileno(stdout), _O_TEXT);
            }
            else if (i == 3 && j == 4 && s == "C")
            {
                _setmode(_fileno(stdout), _O_U16TEXT);
                wprintf(L"\u2663");
                _setmode(_fileno(stdout), _O_TEXT);
            }
            else if (i == 3 && j == 4 && s == "H")
            {
                _setmode(_fileno(stdout), _O_U16TEXT);
                wprintf(L"\u2665");
                _setmode(_fileno(stdout), _O_TEXT);
            }
            else if (i == 3 && j == 4 && s == "D")
            {
                _setmode(_fileno(stdout), _O_U16TEXT);
                wprintf(L"\u2666");
                _setmode(_fileno(stdout), _O_TEXT);
            }
            else cout << arr[i][j];
        }
        cout << endl;
    }  
    return 0;
}

int main()
{    
    string k, s;        
    cout << "Incert kard and suit symbol: S - spades; C - clubs; H - hearts; D - diamonds -> " << endl;
    cin >> k >> s;
    kard(k, s);
    return 0;
}
