#include <iostream>
using namespace std;
int main()
{
	int rats = 101;
	int & rotents = rats;

	cout << rats << " address is " << &rats << endl;
	cout << rotents << "address is " << &rotents << endl;

	int bunnies = 50;
	//这句话不是转引用，而是对于引用的那个对象赋值
	rotents = bunnies;

	cout << bunnies << " address is " << &bunnies << endl;
	cout << rotents << "address is " << &rotents << endl;

	return 0;
}
