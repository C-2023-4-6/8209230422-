#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double Xn1 = 0;
	double Xn = 0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	Xn = 0.5 * (a + 1);
	Xn1 = (Xn +
		a / Xn);
	while (Xn1 - Xn > 0.00001 || Xn1 - Xn < -0.00001)
	{
		Xn = Xn1;
		Xn1 = 0.5 * (Xn1 + a / Xn1);
	}
	cout << "a��ƽ������ " << Xn1 << endl;
	return 0;
}