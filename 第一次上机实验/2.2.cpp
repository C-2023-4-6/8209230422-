#include<iostream>
using namespace std;
int main()
{
	double x = 0;
	double y = 0;
	cout << "请输入一个X的值 " << endl;
	cin >> x;
	if (x > 0 && x < 1)
		y = 3 - 2 * x;
	else if (x >= 1 && x < 5)
		y = 2 / (4 * x) + 1;
	else if (x >= 5 && x < 10)
		y = x * x;
	else
		cout << "错误" << endl;
	cout << "y=" << y;
	return 0;
}
