#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char automobil[50];
	int year;
	double a_price;
	double b_price;

	ofstream outFile;
	outFile.open("carinfo.txt");
	cout << "Enter the make and model of automobile: ";
	cin.getline(automobil,50);
	cout << "enter the model year";
	cin >> year;
	cout <<"Enter the original asking price";
	cin >> a_price;
	b_price = 0.913 * a_price;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model :" << automobil << endl;
	outFile << "Year :" << year << endl;
	outFile.close();
	return 0;
}
