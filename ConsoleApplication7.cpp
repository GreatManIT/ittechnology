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
		cout << "\t Good*"<<endl;
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
	cout << "I`m ready!" << endl;


	cout << "\n";
	system("pause");
}


