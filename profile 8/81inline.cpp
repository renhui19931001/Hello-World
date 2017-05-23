#include <iostream>
#define SQUARE(X) X*X
using namespace std;
inline double square(double x){return x*x;}
int main()
{
	double a,b;
	double c = 13.0;
	a = square(c);
	b = square(4.5+7.5);
	double d = SQUARE(4.5+7.5);
	cout << a << endl;
	cout << b << endl;
	cout << d << endl;
	return 0;
}
