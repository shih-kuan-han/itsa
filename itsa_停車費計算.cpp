#include <bits/stdc++.h>
using namespace std;

int main()
{
	int startH=0,startM=0,endH=0,endM=0;

	cin>>startH>>startM;//Ū�J�}�l�ɶ�
	cin>>endH>>endM;//Ū�J�����ɶ�
	int time=(endH*60+endM)-(startH*60+startM);//�p���`�ɼ�
	if(time<=120 && time>=0){
        cout<<time/30*30<<endl;//2�p�ɤ����O��
    }
	else if(time>120 && time<=240){
        cout<<(time-120)/30*40+120<<endl;//4�p�ɤ����O��+2�p�ɪ��O��
    }
	else{
        cout<<(time-240)/30*60+120+160<<endl;//4�p�ɥ~���O��+4�p�ɪ��O��+2�p�ɪ��O��
    }
	return 0;
}
