#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,y=0;
    while(cin>>x>>y){
        if(x*x + y*y >10000){
            cout << "outside"<<endl;
        }
        else{
            cout << "inside"<<endl;
        }
    }
    return 0;
}
