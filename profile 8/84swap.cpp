#include <iostream>
void swapr(int &,int &);
void swapp(int *,int *);
void swap(int,int);
int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1 << endl;
	cout << "wallet2 = $" << wallet2 << endl;

	swapr(wallet1,wallet2);
	cout << "wallet1 = $" << wallet1 << endl;
	cout << "wallet2 = $" << wallet2 << endl;

	swapp(&wallet1,&wallet2);
	cout << "wallet1 = $" << wallet1 << endl;
	cout << "wallet2 = $" << wallet2 << endl;

	swap(wallet1,wallet2);
	cout << "wallet1 = $" << wallet1 << endl;
	cout << "wallet2 = $" << wallet2 << endl;
	return 0;
}
void swapr(int& a,int& b){
	int temp = a;
	a = b;
	b = temp;
}
void swapp(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap(int a,int b){
	int temp = a;
	a = b;
	b = temp;
}
