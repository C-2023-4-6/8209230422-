#include<iostream>
using namespace std;
int main()
{
	double a = 0.8;
	double w = 0;
	double d = 0;
	double x = 0;
	for (double b = 2;b < 100;b = b * 2)
	{
		w = a * b +w;
		d++;
	}
	x = w / d;
	cout << "平均每天花费的钱数为" << x << endl;
}
