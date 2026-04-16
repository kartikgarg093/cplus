#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,i;
   cout<<"Enter size of array:";
   cin>>n;
   vector<int> a(n);
   cout<<"Enter elements of array:";
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int max=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
    }
    vector<int> b(max+1,0);
   for(i=0;i<n;i++)
   {
       b[a[i]]++;

   }
   for(i=1;i<max+1;i++)
   {
         b[i]=b[i]+b[i-1];
   }
    vector<int> c(n);
    for(i=n-1;i>-1;i++)
    {
        c[b[a[i]]-1]=a[i];
        b[a[i]]--;
     }
    for(i=0;i<n;i++)
    {
        a[i]=c[i];
    }
    cout<<"Sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

 return 0;
}