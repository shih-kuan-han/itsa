#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	char input;
	for(int j = 0;j < 10; j++)
    {
        cin >> input;
        if(input != 'X')
            arr[j] = input- '0';
        else
            arr[j] = input- 78;
    }
    for(int k = 0;k < 2; k++)
    {
        for(int j = 1;j < 10; j++)
        {
            arr[j] = arr[j - 1] + arr[j];
        }
    }
    if(arr[9] % 11 == 0)
        cout<< "YES" << endl;
    else
        cout<< "NO" << endl;
	return 0;
}
