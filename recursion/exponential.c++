#include <bits/stdc++.h>
using namespace std;
int exp(int, int);

int main(){
    int a,b,s;
    cin>>a;
    cin>>b;
    s=exp(a,b);
    cout<<s;
    return (0);
}

int exp(int a, int b)
{
    if (b==0)
    {
        return 1;
    }
    else
    {
        return(a*exp(a,b-1));
    }
}

