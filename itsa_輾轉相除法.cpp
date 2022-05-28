#include <bits/stdc++.h>
using namespace std;

int e(int a,int b)
{
    int f = a%b;
    if(f==0)return b;
    else{
        return e(b,f);
    }
}

int main()
{
    int a,b;
    cin >> a >> b;
    if(a<b){
        swap(a,b);
    }
    cout << e(a,b) << "\n";


    return 0;
}
