#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main(){
     int n,s,r,n1,n2,c=0;
     cin>>n;
     n1=n;
     n2=n;
     s=0;
     while (n1!=0)
     {
        r=n1%10;
        c++;
        n1=n1/10;
     }

     while (n2!=0)
     {
        r=n2%10;
        s=s+pow(r,c);
        n2=n2/10;
     }

     if (n==s)
     {
        cout<<"Armstrong";
     }
     else{
        cout<<"Not Armstrong";
     }
    return(0);
}
