#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input_str;
	cout << "������һ���ַ�:" << endl;
	string s;
	int letters = 0;
	int spacing = 0;
	int number = 0;
	int others = 0;
	getline(cin, input_str); 
	for (char c : input_str)
	{
		if (isalpha(c))
			letters++;
		else if (isspace(c))
			spacing++;
		else if (isdigit(c))
			number++;
		else
			others++;
	}
	cout << "Ӣ����ĸ�ĸ���Ϊ" << letters<<endl;
	cout << "�ո�ĸ���Ϊ" << spacing<<endl;
	cout << "���ֵĸ���Ϊ" << number<<endl;
	cout << "�����ַ��ĸ���Ϊ" << others<<endl;
	return 0;
}