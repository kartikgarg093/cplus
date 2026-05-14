#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    set <int>s;
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(98);
    s.insert(100);
    for(int k:s)
    {
        cout<<k<<" ";
    }

  
 return 0;
}