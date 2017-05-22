#include <iostream>
const int ArSize = 8;
int sum_arr(const int *begin,const int *end);
int main()
{
	using namespace std;
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	cout << cookies << " = array address";
	cout << sizeof(cookies) << " = sizeof cookies\n";
	int sum = sum_arr(cookies,cookies+ArSize);
	cout <<"total sum: " << sum << endl;
	sum = sum_arr(cookies,cookies+3);
	cout << "total sum first three is :" << sum <<endl;
	return 0;
}
int sum_arr(const int* begin,const int*end)
{
	const int*pt;
	int total = 0;
	for(pt = begin;pt!= end;pt++)
		total += *pt;
	return total;

}
