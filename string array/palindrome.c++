#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100], b[100];
    cin.getline(a,100);
    int l=strlen(a),j=0,i;
    for(i=l-1;i>-1;i--)
    {
        b[j]=a[i];
        j++;
    }

    b[j]='\0';
    int s=strcmp(a,b);
    if (s==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return(0);

}