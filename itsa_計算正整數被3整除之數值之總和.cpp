#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    while(cin >> input){
        int ans = 0;
        for(int i=1;i<=input;i++){
            if(i%3 == 0){
                ans += i;
            }
        }
        cout << ans << "\n";
    }



    return 0;
}
