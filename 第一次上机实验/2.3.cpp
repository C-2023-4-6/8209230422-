#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "请输入三角形的三边长 " << endl;
	cin >> a, b, c;
	if (a + b > c && a + c > b && b + c > a)
		if (a == b || b == c || a == c)
			cout << "三角形为等腰三角形 " << endl;
		else
			cout << "三角形不是等腰三角形" << endl;
	else
		cout << "无法构成三角形" << endl;
	return 0;
