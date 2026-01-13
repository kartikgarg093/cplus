#include <bits/stdc++.h>
using namespace std;
int fib(int);

int main(){
    int n,i,f;
    cin>>n;
    for(i=0;i<n;i++)
    {
        f=fib(i);
        cout<<f<<" ";
    }
    return(0);
}

int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    else{
        if (n==1)
        {
            return 1;
        }
        else{
            return(fib(n-1)+fib(n-2));
        }
    }
}