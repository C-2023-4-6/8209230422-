#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double b = 0;
	cin >> a;
	cin >> b;
	cout << "a��b����" << a + b << endl;
	cout << "a��b����" << a - b << endl;
	cout << "a��b����" << a / b << endl;
	cout << "a��b����" << a * b << endl;
	cout << "a��bȡ����� " << int(a) % int(b) << endl;
	if (b == 0)
		cout << "aΪ�������" << endl;
}
