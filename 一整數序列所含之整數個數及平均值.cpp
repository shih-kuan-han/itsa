#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;

int main()
{
	string num[10000];
	double anum[10000];
	int size;
	double sum,avg;
	size = 0;
	sum = 0;
	avg = 0;
	string str;
	while (getline(cin,str))
	{
		stringstream ss(str);
		while (ss >> num[size])
		{
			anum[size] = atof(num[size].c_str());
			size++;
		}
		for (int i = 0;i < size; i++)
		{
			sum += anum[i];
		}
		avg = sum / size;
		cout << "Size: " << size << endl;
		cout << "Average: " << fixed << setprecision(3) << avg << endl;
		size = 0;
		sum = 0;
	}
	return 0;
}
