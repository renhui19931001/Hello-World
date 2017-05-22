#include <iostream>
#include <cmath>

//structure 极坐标
struct polar{
	double distance;
	double angle;
};
struct rect{
	double x;
	double y;
};

void rect_to_polar(const rect* pxy,polar *);
void show_polar(const polar*);
int main(){
	using namespace std;
	rect rplace;
	polar pplace;
	cout <<"Enter the x and y value: ";
	while(cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "Next two number (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}
void rect_to_polar(const rect* r,polar* pda)
{
	using namespace std;
	pda->distance = sqrt(r->x*r->x +r->y*r->y);
	pda->angle = atan2(r->x,r->y);
}
void show_polar(const polar* p)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << p->distance;
	cout << ",angle = " << p->angle*Rad_to_deg;
	cout << " degrees\n";
}
