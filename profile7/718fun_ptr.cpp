#include <iostream>
double betsy(int);
double pam(int);
//这里代表着变量有一个函数名，例如在sort的时候就允许自己提供函数
void estimate(int,double (*pf)(int));
int main()
{
	using namespace std;
	int code;
	cout << "How many lines of code do you need?";
	cin >> code;
	cout << "Here's Betsy's estimate:\n";
	estimate(code,betsy);
	cout << "Here's pam's estimate: \n";
	estimate(code,pam);
	return 0;
}
double betsy(int lns){
	return 0.05*lns;
}
double pam(int lns){
	return 0.03*lns + 0.04 *lns*lns;
}
void estimate(int lines,double (*pf)(int)){
	using namespace std;
	cout << lines <<" lines will take ";
	cout << (*pf)(lines) << "hours.\n";
}
