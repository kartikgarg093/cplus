#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s1;
    s1={"Hello"};
    string s2{"Hello"};
    string s3{s2};
    string s4={"hell0",3};
    string s5={s1,3};
    string s6(5,'a');
    cout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n"<<s4<<"\n"<<s5<<"\n"<<s6;
    return(0);

}








