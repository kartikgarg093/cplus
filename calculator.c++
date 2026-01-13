#include <bits/stdc++.h>
using namespace std;
int calculator(int);

int main(){
    int s,k=5;
    while (k==5){
        cout<<"Press 5 for calculator\n";
        cin>>k;
        if (k==5)
        {
            cout<<"Press 1 for addition \n";
            cout<<"Press 2 for Subtraction \n";
            cout<<"Press 3 for Multiplication \n";
            cout<<"Press 4 for Divison \n";
            int choice;
            cin>>choice;
            s=calculator(choice);
        
        }
        else
        {
            cout<<"Exit";
            break;
            
        }
    }
    return 0;
 }  


 int calculator(int choice){
    float a,b;
    cin>>a>>b;
     switch (choice){
        case 1:
        cout<<"Add = "<<a+b<<"\n";
        break;
        case 2:
        cout<<"Sub = "<<a-b<<"\n";
        break;
        case 3:
        cout<<"Multiply = "<<a*b<<"\n";
        break;
        case 4:
        cout<<"Divide = "<<a/b<<"\n";
        break;
        default :
        cout<<"Invalid Operator\n";
     }
     return(0);
 }
