#include <iostream>
const int len=66;
const int divs = 6;
using namespace std;
void subdivide(char ar[],int low,int hight,int level);
int main717()
{
	char ruler[len];
	int i ;
	for(i=1;i<len -2;i++)
		ruler[i] = ' ';
	ruler[len-1] = '\0';
	int max= len -2;
	int min =0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for(i = 1; i< divs ;i++)
	{
		subdivide(ruler,min,max,i);
		cout << ruler << endl;
		for(int j =1; j< len-2;j++)
		{
			ruler[j] = ' ';
		}
	}
	return 0;
}
void subdivide(char ar[],int low,int hight,int level){
	if(level == 0)
		return;
	int mid = (low+hight)/2;
	ar[mid] = '|';
	subdivide(ar,low,mid,level-1);
	subdivide(ar,mid,hight,level-1);
}
