#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;
int main()
{
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout << "could not open the file";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum =0.0;
	int count = 0;
	inFile >> value;
	while(inFile.good())
	{
		++count;
		sum +=value;
		inFile >> value;
	}
	//判断是否为空
	if(inFile.eof())
	{
		cout << "End of file reached.\n";
	}else if(inFile.fail())
		cout << "Input mismatch.\n";
	else
		cout << "Input by unknown reason.\n";
	if(count == 0)
		cout <<"0";
	else{
		cout <<"Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum/count << endl;
	}
	inFile.close();
	return 0;
}
