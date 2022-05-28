#include <bits/stdc++.h>
using namespace std;

int f(int a)
{
    if(a==0) return 1;
    if(a==1) return 2;
    return f(a-1) + f(a/2);
}

int main()
{
    int input;
    while(cin >> input){
        int ans = f(input);
        cout << ans << "\n";
    }
    return 0;
}
