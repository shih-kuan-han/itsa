#include<iostream>
using namespace std;
int main()
{
    int an=0,ana[4],ain[4];
    cin>>an;
    for(int i=3;i>=0;i--)//�f�VŪ�J�}�C
    {
        ana[i]=0;ain[i]=0;
        ana[i]=an%10;an/=10;
    }
    while(true)//�O���L���j�骬�A
    {
        int in=0,a=0,b=0;
        cin>>in;
        an=0;//�Ѱ��L���j���
        for(int i=3;i>=0;i--)//�T�O��m�P���׬ۦP
        {
            ain[i]=in%10;in/=10;//�f�VŪ�J�}�C
            if(ain[i]==0)an++;//�P�w0���Ӽ�
            if(ain[i]==ana[i]){a++;continue;}//�T�{�P��m�B�P����
            else {for(int j=0;j<4;j++){if(ain[i]==ana[j]&&j!=i){b++;break;}}}//�M���l3�Ӫ���m�O�_���P�˵���
        }
        if(an==4)break;//�P�w�O�_4��0
        else cout<<a<<"A"<<b<<"B"<<endl;//��X����
    }
    return 0;
}
