#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,i;
  cout<<"Enter size of array:";
  cin>>n;
  int a[n];
  cout<<"Enter Elements of array:";
  for(i=0;i<n;i++)
  {
    cin>>a[n];
  }
  int max=a[0];
  for(i=1;i<n;i++)
  {
    if (a[i]>max)
    {
        max=a[i];
    }
  }
  int b[max/10+1][n];
  int c[max/10+1]={0};
  for(i=0;i<n;i++)
  {
    int d=a[i]/10;
    b[d][c[d]]=a[i];
    c[d]++;
}
 return 0;
}