#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f = 0;
	double c = 1;
	cout << "请输入摄氏度" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "该华氏度对应的摄氏度为  " << fixed << setprecision(2) << c << endl;
	return 0;
}
