#include<iostream>
using namespace std;
int main()
{
	string in;
	getline(cin,in);
	if(((int)in[1]-'0')<1||((int)in[1]-'0')>2){cout<<"WRONG!!!"<<endl;return 0;}//�ʧO�˴�
	for(int i=1;i<9;i++)//�Ʀr�ϰ�O�_���Ʀr
	{
		if(in[i]<'0'||in[i]>'9'){cout<<"WRONG!!!"<<endl;return 0;}
	}
	int p=0,loc=0;
	loc=(int)in[0];
	if(loc<'A'||loc>'Z'){cout<<"WRONG!!!"<<endl;return 0;}//�ϰ�X�ഫ
	else if(loc<=72){loc-=55;}//A~H
	else if(loc==73){loc=34;}//I
	else if(loc>73&&loc<=78){loc-=56;}//J~N
	else if(loc==79){loc=35;}//O
	else if(loc>79&&loc<=86||loc==90){loc-=57;}//P~V && Z
	else if(loc==87){loc=32;}//W
	else if(loc>87&&loc<=89){loc-=58;}//X�BY
	p=(loc/10)+9*(loc%10);//���Q��ƦA�[�W�Ӧ��*9
	for(int i=1;i<9;i++){p+=(9-i)*((int)in[i]-'0');}//�[�W���᪺�����`�M
	if(10-(p%10)!=((int)in[9]-'0')){cout<<"WRONG!!!"<<endl;return 0;}//�ˬd�X�P�w
	else {cout<<"CORRECT!!!"<<endl;return 0;}
}
