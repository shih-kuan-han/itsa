#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 int N,a;
 double x,y;
 //cin >> N;
 //for (int i = 0;i < N; i++)

  cin >> a;
  if (a > 0)
  {
   if (a <= 120)
      {
       x = a * 2.1;
       y = a * 2.1;
      }
      else if (a > 120 && a <= 330)
         {
             x = 120 * 2.1 + (a - 120) * 3.02;
             y = 120 * 2.1 + (a - 120) * 2.68;
         }
         else if (a > 330 && a <= 500)
         {
          x = 120 * 2.1 + 210 * 3.02+ (a - 330) * 4.39;
          y = 120 * 2.1 + 210 * 2.68+ (a - 330) * 3.61;
         }
         else if (a > 500 && a <= 700)
         {
          x = 120 * 2.1 + 210 * 3.02+ 170 * 4.39+ (a - 500) * 4.97;
          y = 120 * 2.1 + 210 * 2.68+ 170 * 3.61+ (a - 500) * 4.01;
         }
         else if (a > 700)
         {
          x = 120 * 2.1 + 210 * 3.02+ 170 * 4.39+ 200 * 4.97+ (a - 700) * 5.63;
          y = 120 * 2.1 + 210 * 2.68+ 170 * 3.61+ 200 * 4.01+ (a - 700) * 4.50;
         }
         cout << "Summer months:" << fixed << setprecision(2) << x << endl;
         cout << "Non-Summer months:" << fixed << setprecision(2) << y << endl;
  }

 return 0;
}
