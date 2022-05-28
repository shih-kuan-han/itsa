#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int n, T, m, k,sum;
 int a[100];
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> T >> m >> k;
  sum = 0;
  for (int j = 0; j < k; j++)
  {
   cin >> a[j];
  }
  sort(a,a + k);
  for (int j = 0; j < m; j++)
  {
   sum += a[j];
   if (sum > T)
   break;
  }
  if (sum > T)
  {
   cout << "Impossible" << endl;
  }
  else
  {
   cout << sum << endl;
  }
 }
 return 0;
}
