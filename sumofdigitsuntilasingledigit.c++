#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,r,c;
     cin>>n;
     while (n>9)
     {
        c=0;
        while (n!=0)
        {
            r=n%10;
            c=c+r;
            n=n/10;
        }
        n=c;
     }
     cout<<n;
     

    return(0);
}
