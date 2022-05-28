#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    while(cin >> input){
        if(input%400 == 0){
            cout << "Bissextile Year" << "\n";
             break;
        }
        else if(input%100 == 0){
            cout << "Common Year" << "\n";
            break;
        }
        else if(input%4==0){
            cout << "Bissextile Year" << "\n";
             break;
        }
        else{
            cout << "Common Year" << "\n";
             break;
        }
    }
    return 0;
}
