#include <iostream>
using namespace std;

int main() {

  int N;
 cin >> N;
    int fail = 0;
  for(int i = 0;i < N;i++)
    {
      int grade[3];
      cin >> grade[0] >> grade[1] >> grade[2];
     //聽力, 閱讀, 口說
       for(int j = 0;j < 3;j++)
        {
          if(grade[j] < 60)
           {
              fail++;
            }
      }
      if(fail == 0)
      {
          cout << "P" << endl;
       }
      else if(fail == 1)
      {
          if(grade[0] + grade[1] + grade[2]>=220)
         {
              cout << "P" << endl;
           }
          else if(grade[0] + grade[1] + grade[2] < 220)
           {
              cout << "M" << endl;
           }
      }
      else if(fail == 2)
      {
          if(grade[0] >= 80 || grade[1] >= 80 || grade[2] >= 80)
            {
              cout << "M" << endl;
           }
          else
           {
              cout << "F" << endl;
           }
      }
      else
      {
          cout << "F" << endl;
      }
      fail = 0;
  }
  return 0;
}
