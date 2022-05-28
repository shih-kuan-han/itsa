#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input,output;
	bool a=1;

	cin>>input;
	for(int i=input.length()-1;i>=0;i--){
		output[input.length()-1-i]=input[i];
	}
	for(int j=0;j<input.length();j++){
		if(input[j]!=output[j]){
            a=0;
            break;
        }
		else{
           a=1;
		}
	}
	if(a==1){
        cout << "YES"<<endl;
	}
	else{
        cout<< "NO" << endl;
	}

	return 0;
}
