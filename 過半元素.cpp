#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int arr[30];
	int N, count,a;
	string str;
	while (getline(cin, str))
	{
		a = 0;
		N = 0;
		stringstream ss(str);
		while (ss >> arr[N++])
		{

		}
		N--;
		for (int i = 0; i < N; i++)
		{
			count = 0;
			for (int j = 0; j < N; j++)
			{
				if (arr[i] == arr[j])
					count++;
			}
			if (count > N / 2)
			{
				a = 1;
				cout << arr[i] << endl;
				break;
			}
		}
		if (count <= N / 2 && a == 0)
			cout << "NO" << endl;
	}
	return 0;
}
