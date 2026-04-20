#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"Enter size of array:";
  int n,i,j;
  cin>>n;
  int a[n];
  cout<<"Enter elements of array:";
  for(i=0;i<n;i++) {
    cin>>a[i];
  }
  int max=a[0];
  for(i=1;i<n;i++) {
    if(a[i]>max) {
      max=a[i];
    }
  }
  for(i=1;max/i>0;i*=10){
    int b[10]={0};
    for(j=0;j<n;j++)
    {
      b[(a[j]/i)%10]++;
    }
    for(j=1;j<10;j++)
    {
      b[j]=b[j]+b[j-1];

    }
    int c[n];
    for(j=n-1;j>-1;j--)
    {
      c[b[(a[j]/i)%10]-1]=a[j];
      b[(a[j]/i)%10]--;
    }
    for(j=0;j<n;j++)
    {
      a[j]=c[j];
    }
  }
  cout<<"Sorted array is:";
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
 return 0;
}