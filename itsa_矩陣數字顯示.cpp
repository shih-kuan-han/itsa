#include <bits/stdc++.h>
using namespace std;

void f1(int a)
{
    if(a==0||a==2||a==3||a==5||a==6||a==7||a==8||a==9){
        cout << "*****";
    }
    if(a==1){
        cout << "*";
    }
    if(a==4){
        cout << "*   *";
    }

}

int main()
{
    int a;
    while(cin >> a){
        vector<int> b;
        while(a!=0){
            b.push_back(a%10);
            a/=10;
        }
        b.reverse(b.begin(),b.end());
        for(int i=0;i<b.size();b++){
            f1(i);
            cout << " ";
        }
        cout << "\n";
        for(int i=0;i<b.size();b++){
            f2(i);
            cout << " ";
        }
        cout << "\n";
        for(int i=0;i<b.size();b++){
            f3(i);
            cout << " ";
        }
        cout << "\n";
        for(int i=0;i<b.size();b++){
            f4(i);
            cout << " ";
        }
        cout << "\n";
        for(int i=0;i<b.size();b++){
            f5(i);
            cout << " ";
        }
    }


    return 0;
}
