#include <iostream>
using namespace std;
int sum(int*,int*);

int main(){
    int a,b,c;
    cin>>a>>b;
    c=sum(&a,&b);
    cout<<c;
    return(0);
}

int sum(int *p,int *f){
    int c;
    c=*p+*f;
    return c;
}