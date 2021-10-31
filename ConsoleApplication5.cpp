#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "*";
	}
	for (int i = 0; i < 10; i += 10)
	{
		cout << "\t*"<<endl;
		for (int i = 0; i < 10; i += 10)
		{
			cout << "*";
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "*";
	}
	cout << "Hello World!" << endl;

	cout << "\n";
	system("pause");
}


