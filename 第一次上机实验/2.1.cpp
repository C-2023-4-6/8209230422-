#include<iostream>
using namespace std;
int main()
{
	char a = 0;
	cout << "������һ���ַ� " << endl;
	cin >> a;
	if (a >= 97 && a <= 122)
		cout << char(a - 32) << endl;
	else
		cout << a + 1 << endl;
}
