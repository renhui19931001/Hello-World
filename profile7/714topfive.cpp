#include <iostream>
#include <string>
using namespace std;
const int Size = 5;
void display(const string[],int);
int main()
{
	string lish[Size];
	cout << "Enter your" << Size << "favorite astronomical sights:\n";
	for(int i =0; i < Size ; i++)
	{
		cout << i+1 << ": ";
		//getline能够按行来进行读取
		getline(cin,lish[i]);
	}
	cout << "your list: \n";
	display(lish,Size);
	return 0;
}
void display(const string sa[],int n)
{
	for(int i=0;i< n;i++)
		cout << i+1 << ": " << sa[i] << endl;
}
