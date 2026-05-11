#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,i,j;
  cout<<"Enter size of array:";
  cin>>n;
  int a[n];
  cout<<"Enter Elements of array:";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
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
  for(i=0;i<(max/10+1);i++)
  {
    int h=c[i];
    for(j=1;j<h;j++)
    {
      int temp=b[i][j];
      for(int k=j-1;k>-1;k--)
      {
        if (b[i][k]>temp)
        {
          b[i][k+1]=b[i][k];
          b[i][k]=temp;
        }
        else
        {
          break;
        }
      }
    }
  }
  int index=0;

  for(i=0;i<(max/10+1);i++)
  {
    int h=c[i];
    for(j=0;j<h;j++)
    {
      a[index]=b[i][j];
      index++;
    }
  }

  cout<<"Sorted Array is:";
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<" ";
 }
 return 0;
}