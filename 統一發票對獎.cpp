#include <iostream>
#include <string.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    // �D��28. �Τ@�o�����
    string J;//�Y��
    string s1, s2, s3;//�S��
    cin >> J >> s1 >> s2 >> s3;
    int count[7];//�ƶq�p��
    fill(count, count+7, 0);
    long int money = 0;//�`���B
    int m[6] = {200000, 40000, 10000, 4000, 1000, 200};
    int N;//�o���ƶq
    int c = 0;//���X�X
    cin >> N;
    int mm = 0;//�ثe���̰����B
    for(int i = 0;i < N;i++)
    {
        string num;
        cin >> num;
        if(num == J)//���Y���A��L�N���ι�F
        {
            money = money + 2000000;
            count[0]++;
        }
        else
        {
            for(int b = 0; b < 3;b++)
            {
                if(b == 0)//��Ĥ@�ӯS��
                {
                    for(int j = 7;j >= 0;j--)
                    {
                        if(s1[j] == num[j])//�p�⤤�X�X
                        {
                            c++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    for(int j = 8;j >= 3;j--)//��X�X�۹�������
                    {
                        if(c == j)
                        {
                            if(m[8-j] > mm)
                            {
                                mm = m[8-c];
                            }
                        }
                    }
                    c = 0;
                }
                else if(b == 1)//��ĤG�ӯS��
                {
                    for(int j = 7;j >= 0;j--)
                    {
                        if(s2[j] == num[j])//�p�⤤�X�X
                        {
                            c++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    for(int j = 8;j >= 3;j--)//��X�X�۹�������
                    {
                        if(c == j)
                        {
                            if(m[8-c] > mm)
                            {
                                mm = m[8-c];
                            }
                        }
                    }
                    c = 0;
                }
                else if(b == 2)//��ĤT�ӯS��
                {
                    for(int j = 7;j >= 0;j--)
                    {
                        if(s3[j] == num[j])//�p�⤤�X�X
                        {
                            c++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    for(int j = 8;j >= 3;j--)//��X�X�۹�������
                    {
                        if(c == j)
                        {
                            if(m[8-c] > mm)
                            {
                                mm = m[8-c];
                            }
                        }
                    }
                    c = 0;
                }
            }
            for(int j = 0;j < 7;j++)//�T�ӯS�����A�̰��������ƶq�[�@
            {
                if(mm == m[j])
                {
                    count[j+1]++;
                }
            }
            money = money + mm;
            mm = 0;
        }
    }
    //��X
    for(int i = 0;i < 7;i++)
    {
        if(i != 6)
        {
            cout << count[i] << " ";
        }
        else
        {
            cout << count[i] << endl;
        }
    }
    cout << money << endl;
}
