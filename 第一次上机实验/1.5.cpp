#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f = 0;
	double c = 1;
	cout << "���������϶�" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "�û��϶ȶ�Ӧ�����϶�Ϊ  " << fixed << setprecision(2) << c << endl;
	return 0;
}
