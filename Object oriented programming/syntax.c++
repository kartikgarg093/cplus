#include <iostream>
using namespace std;
//Creating Class
class Student{
    public:
    int a,b;
    int add(int a, int b){
        return a+b;
    }
};


int main(){
    Student s;//Creating Object
    cin>>s.a;
    cin>>s.b;
    int y=s.add(s.a,s.b);
    cout<<y;
    return(0);
}



