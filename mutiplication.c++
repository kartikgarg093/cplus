#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,m,p,q;
     cout<<"order of first Matrix"<<endl;
     cin>>n>>m;
     cout<<"order of second Matrix"<<endl;
     cin>>p>>q;
     int a[n][m], b[p][q];
     int i,j,k;
     if (m==p)
     { int c[n][q];
        cout<<"Matrix can be multiplied\nEnter two matrix\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            cin>>a[i][j];
            }
        }

        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
            cin>>b[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<m;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
     
     }
     else
     {
        cout<<"Matrix can't be multiplied";
     }
    return(0);
}
