#include<iostream>
#define pi  3.14159
using namespace std;
int main()
{
	double r = 0;
	double h = 0;
	double V = 0;
	cin >> r;
	cin >> h;
	cout << "������Բ׶�İ뾶�͸� " << endl;
	V = pi / 3 * r * r * h;
	cout << "Բ׶������� " << V << endl;
	return 0;
}