#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    while(cin >> input){
        int count = 0;
        for(int i=2;i<input;i++){
            if(input%i==0){
                cout << "NO" << "\n";
                break;
            }
            count++;
        }
        if(count == (input-2)){
                cout << "YES" << "\n";
        }
        else{
            return 0;
        }
    }
}
