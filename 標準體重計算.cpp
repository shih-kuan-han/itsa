#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int height,sex;
	double weight;
	while (cin >> height >> sex)
	{
		switch (sex)
	    {
			case 1:
				weight = (height - 80) * 0.7;
				cout << fixed << setprecision(1) << weight << endl;
				break;
			case 2:
				weight = (height - 70) * 0.6;
				cout << fixed << setprecision(1) << weight << endl;
				break;
		}
	}
	return 0;
}
