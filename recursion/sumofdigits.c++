#include <bits/stdc++.h>
using namespace std;
int sum(int);

int main(){
    int s,n;
    cin>>n;
    s=sum(n);
    cout<<s;
    return(0);
}

int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        int r,c=0;
        r=n%10;
        c=c+r;
        return(c+sum(n/10));
    }
}