#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
	int a;
	int arr[100];
	int index = 0;
	while(cin>>a){
    	arr[index++] = a;
    	char ch = getchar();
    	if(ch == '\n') break;
    }

    for(int i=0;i<index;i++)
    	cout<<arr[i]<<" ";
    cout<<endl;

	return 0;
}
