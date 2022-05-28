#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,c;
	int num[4];
	int ans[4] = {1};
	a = 0;
	b = 0;
	c = 1;
	for (int i = 0;i < 4; i++)
	cin >> num[i];

	sort(num, num + 4);
	for (int j = 1;j < 4; j++)
	{
		if (num[j] == num[j - 1])
		c++;
		else
		c = 1;
		ans[j] = c;
		if (a < ans[j])
		a = ans[j];
	}
	if (a == 4)
	cout << "WIN" << endl;
	else if (a == 1 || a == 3)
	cout << "R" << endl;
	else if (a == 2)
	{
		if (num[0] == num[1] && num[2] == num[3])
		{
			b = num[2] * 2;
		}
		else
		{
			for (int i = 0; i < 4; i++)
				b += num[i];
			for (int i = 0; i < 4; i++)
			if (ans[i] == a)
				b -= num[i] * 2;
		}
		cout << b << endl;
	}
	return 0;
}
