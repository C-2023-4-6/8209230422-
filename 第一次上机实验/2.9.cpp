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
	cout << "ƽ��ÿ�컨�ѵ�Ǯ��Ϊ" << x << endl;
}
