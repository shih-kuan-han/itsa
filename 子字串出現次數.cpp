#include<iostream>
#include<string>
using namespace std;
int appearNum(string& s,int p,string& l);
int main()
{
	string inputS,inputL,save;

	cin>>inputS>>inputL;
	cout<<appearNum(inputS,0,inputL)<<endl;
	return 0;
}
int appearNum(string& s,int p,string& l)//�r�껼�j(�˯��r��A�_�l��m�A�Q�˯��r��)
{
	int a=0;
	if(p>l.length())return a=0;//�Y�������פj��Q�˯��r����׫h�^��0
	for(int i=0;i<s.length();i++)//���˯��r����׶i��j��
	{
		if(l[i+p]==s[i])continue;//�Y���ŦX�A�h������ܧ����ŦX
		else return a+=appearNum(s,p+1,l);//��藍�Ŧ^�Ƿ�e�ŦX����
	}
	a++;return a+=appearNum(s,p+1,l);//�j�駹����ܤ�粒���ŦX�A�p���᩹�k�����A����
}
