#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    char b;
    b=a.at(3);
    cout<<b<<" "<<a.at(5);

    return(0);
}