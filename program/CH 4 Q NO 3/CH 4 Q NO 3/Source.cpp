#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
struct volume
{
	Distance length;
	Distance width;
	Distance height;
};
int main()
{
	float l, w, h;
	volume r = { {2,6.3},{4,5.6},{6,3.5} };
	cout << "Lenght of room: " << r.length.feet << "\'-" << r.length.inches << endl;
	cout << "Width of room: " << r.width.feet << "\'-" << r.width.inches << endl;
	cout << "height of room: " << r.height.feet << "\'-" << r.height.inches << endl;
	l = r.length.feet + r.length.inches / 12.0;
	w = r.width.feet + r.width.inches / 12.0;
	h = r.height.feet + r.width.inches / 12.0;
	float volume = l * w * h;
	cout << "The volume is: " << volume <<" cubic feet" <<endl;
}