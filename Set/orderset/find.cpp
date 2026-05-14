#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    set <int> s={1,2,0,98,100};
    if (s.find(9)!=s.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

  
 return 0;
}