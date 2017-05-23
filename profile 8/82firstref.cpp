#include <iostream>
using namespace std;
int main()
{
	int rats =101;
	int & rodents = rats;
	cout << rats << " address is " << &rats << endl;
	cout << rodents << "address is " << &rodents << endl;
	rodents = 250;
	cout << rats << " address is " << &rats << endl;
	cout << rodents << "address is " << &rodents << endl;
	return 0;
}
