#include<iostream>
#include<sstream>
using namespace std;
void sort(int c[],int& m);
int main()
{
	int in=0;
	cin>>in;
	int ar[in];//�Ӧ��]�ɭP"ar[0]"�A�l��"�L�İO����ޥ�"
	for(int i=0;i<in;i++){cin>>ar[i];}
	sort(ar,in);
	for(int i=in-1;i>=0;i--){if(i==0){cout<<ar[i]<<endl;}else cout<<ar[i]<<" ";}
	return 0;
}
void sort(int c[],int& m)
{
	int b[m],a=0;
	for(int j=0;j<m;j++)//�̧ǨD�X�`�M��
	{
		b[j]=0;a=c[j];
		while(a>0)
		{
			b[j]+=a%10;
			a/=10;
		}
	}
	for(int i=0;i<m;i++)//�w�w�Ƨ�
	{
		for(int j=0;j<m;j++)
		{
			if(b[i]>b[j]||(b[i]==b[j]&&c[i]>c[j]))
			{
				int tc=0,tb=0;
				tb=b[i];b[i]=b[j];b[j]=tb;
				tc=c[i];c[i]=c[j];c[j]=tc;
			}
		}
	}
}
