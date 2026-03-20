#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if (j==1)
        {
            cout<<i<<" ";
        }
    }
    
}