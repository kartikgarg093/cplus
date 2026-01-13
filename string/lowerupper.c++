#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    char u;
    getline(cin,a);
    for(char i: a)
    {
        u=tolower(i);
        cout<<u;
    }
    char b;
    for(char j:a)
    {
        b=toupper(j);
    
        cout<<b;
    }
    return(0);
}