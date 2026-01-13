#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100], b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    int l=strcmp(a,b);
    cout<<l;
    return(0);

}