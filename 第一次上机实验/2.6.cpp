#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	const int x = a;
	const int y = b;
	while (b > 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "a��b����������� " << a << endl;
	int n = x * y / a;
	cout << "a��b����С�������� " << n << endl;
	return 0;
}
