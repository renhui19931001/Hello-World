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
polar rect_to_polar(rect);
void show_polar(polar);
int main(){
	using namespace std;
	rect rplace;
	polar pplace;
	cout <<"Enter the x and y value: ";
	while(cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two number (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}
polar rect_to_polar(rect r)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(r.x*r.x +r.y*r.y);
	answer.angle = atan2(r.x,r.y);
	return answer;
}
void show_polar(polar p)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << p.distance;
	cout << ",angle = " << p.angle*Rad_to_deg;
	cout << " degrees\n";
}
