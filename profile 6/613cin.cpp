#include <iostream>
const int Max = 5;
using namespace std;
int main()
{
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "you must enter" << Max << " rounds.\n";
	int i =0;
	for(;i<Max; i++)
	{
		cout << "round #" << i+1 <<": ";
		while(!(cin >> golf[i]))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Please enter a number : ";
		}
	}
	double total =0.0;
	for(i = 0;i < Max;i++)
		total += golf[i];
	cout << total/Max;
	return 1;
}
