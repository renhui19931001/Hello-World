#include <iostream>
using namespace std;

void cheers(int);
double cube(double);
int main()
{
	cheers(5);
	cout << "Input a number :";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << volume;
	return 0;
}
void cheers(int n)
{
	for(int i=0;i < n;i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x*x*x;
}
