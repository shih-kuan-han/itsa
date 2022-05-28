#include<bits/stdc++.h>

using namespace std;
int main()
{
    int Km;
    double Mile;
    while(cin >> Km){
        Mile = (double)Km * (1.6);
        printf("%.1lf\n",Mile);
    }
    return 0;
}
