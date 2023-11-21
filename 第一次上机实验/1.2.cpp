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
	cout << "请输入圆锥的半径和高 " << endl;
	V = pi / 3 * r * r * h;
	cout << "圆锥的体积是 " << V << endl;
	return 0;
}