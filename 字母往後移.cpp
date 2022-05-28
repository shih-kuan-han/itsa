#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string str;
	getline(cin,str);
	cin >> n;
	for (int i = 0;i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = (str[i] - 'A' + n) % 26 + 'A';
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = (str[i] - 'a' + n) % 26 + 'a';
		if (str[i] >= '0' && str[i] <= '9')
		str[i] = (str[i] - '0' + n) % 10 + '0';
	}
	cout << str << endl;
	return 0;
}
