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
	cout << "a和b的最大公因数是 " << a << endl;
	int n = x * y / a;
	cout << "a和b的最小公倍数是 " << n << endl;
	return 0;
}
