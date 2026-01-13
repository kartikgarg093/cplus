#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int e=a.find('a'),s,q;
    s=a.rfind('a');
    q=a.rfind('a',5);
    cout<<e<<" "<<s<<" "<<q;
    return(0);

}