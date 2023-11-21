#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input_str;
	cout << "请输入一行字符:" << endl;
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
	cout << "英文字母的个数为" << letters<<endl;
	cout << "空格的个数为" << spacing<<endl;
	cout << "数字的个数为" << number<<endl;
	cout << "其他字符的个数为" << others<<endl;
	return 0;
}