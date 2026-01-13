#include <bits/stdc++.h>
using namespace std;
int table(int,int);

int main(){
    int n,i,s;
    cin>>n;
    for(i=1;i<11;i++)
    {
        s=table(n,i);
        cout<<n<<"X"<<i<<"="<<s<<endl;
    }
    return(0);
}

int table(int a,int b)
{
    if (b==1)
    {
        return a;
    }
    else
    {
        return(a+table(a,b-1));
    }
}