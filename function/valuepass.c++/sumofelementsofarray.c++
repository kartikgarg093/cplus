#include <iostream>
using namespace std;
int sum(int [], int );

int main(){
    int n,s,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=sum(a,n);
    cout<<s;
    return(0);
}

int sum(int a[],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}
