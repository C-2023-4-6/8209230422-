#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double b = 0;
	cin >> a;
	cin >> b;
	cout << "a加b等于" << a + b << endl;
	cout << "a减b等于" << a - b << endl;
	cout << "a除b等于" << a / b << endl;
	cout << "a乘b等于" << a * b << endl;
	cout << "a除b取余等于 " << int(a) % int(b) << endl;
	if (b == 0)
		cout << "a为正无穷大" << endl;
}
