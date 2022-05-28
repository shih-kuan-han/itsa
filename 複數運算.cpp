#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int a1,a2,b1,b2;
        char w;
        cin>>w>>a1>>a2>>b1>>b2;
        switch(w){
            case '+':cout<<a1+b1<<" "<<a2+b2<<"\n";break;
            case '-':cout<<a1-b1<<" "<<a2-b2<<"\n";break;
            case '*':cout<<a1*b1-a2*b2<<" "<<a2*b1+a1*b2<<"\n";break;
            case '/':cout<<(a1*b1+a2*b2)/(b1*b1+b2*b2)<<" "<<(a2*b1-a1*b2)/(b1*b1+b2*b2)<<"\n";break;
        }
    }

}
