#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "�����������ε����߳� " << endl;
	cin >> a, b, c;
	if (a + b > c && a + c > b && b + c > a)
		if (a == b || b == c || a == c)
			cout << "������Ϊ���������� " << endl;
		else
			cout << "�����β��ǵ���������" << endl;
	else
		cout << "�޷�����������" << endl;
	return 0;
