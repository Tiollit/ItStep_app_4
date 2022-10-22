// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int main()
{ 
	int b;
	const int a = 4;
	int arr[a][a];
	cout << "Incert number:" << endl;
	cin >> b;
	for (int i = 0; i < a; i++)
		for (int j = 0; j < a; j++)
		{
			if (i == 0 && j == 0) arr[i][j] = b;
			else
			{
				arr[i][j] = b * 2;
				b = b * 2;
				cout << arr[i][j];
			}
			cout << endl;

		}
	return 0;
}

