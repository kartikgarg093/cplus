#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b="";
    getline(cin,a);
    int l=a.size(),i;
    for(i=l-1;i>=0;i--)
    {
        b=b+a[i];
    }
    cout<<b;
    return(0);
}
