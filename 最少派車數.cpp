#include<bits/stdc++.h>
using namespace std;
int main()
{
    int inputN=0,t[24]={0};//�@��24�p��
    cin>>inputN;
    for(int i=0;i<inputN;i++)//�]��(��^�ɶ���j��X�o�ɶ�)�A�G�̿�J�ɶ��̧Ƕ��l
    {
        int a=0,b=0;
        cin>>a>>b;
        for(int j=a-1;j<b-1;j++){t[j]++;}
    }
    inputN=t[0];//�N���ݭn���Ŷ��A���Q��
    for(int i=0;i<24;i++){if(inputN<t[i])inputN=t[i];}//�M�̤j��
    cout<<inputN<<endl;
    return 0;
}
