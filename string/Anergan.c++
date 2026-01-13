#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int l1,l2;
    l1=a.size();
    l2=b.size();
    if (l1==l2)
    {
       sort(a.begin(),a.end());
         sort(b.begin(),b.end());
         if (a==b){
            cout<<"Anergan";
         }
         else
         {
            cout<<"Not Anergan";
         }

    }

    else{
      cout<<"Not Anergan";
    }
    return(0);
}
