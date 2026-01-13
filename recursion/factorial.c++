#include <bits/stdc++.h>
using namespace std;
int factorial(int);

int main(){
    int n,f;
    cin>>n;
    f=factorial(n);
    cout<<f;
    return(0);
}

int factorial(int a)
{
    if (a==1)
    {
        return 1;
    }
    else
    {
        return(a*factorial(a-1));
    }
}