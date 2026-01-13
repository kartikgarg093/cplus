#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,m;
     cout<<"order of Matrix"<<endl;
     cin>>n>>m;
     int a[n][m];
     int i,j,s;
     for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
     }
     for(i=0;i<m;i+=2)
     {  s=0;
        for(j=0;j<n;j++)
        {
            s=s+a[j][i];
        }
        cout<<s<<" ";
     }
     
    return(0);
}
