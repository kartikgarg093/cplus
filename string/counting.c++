#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int v=0,c=0,s=0,d;
    d=0;
   for(char i:a)
   {
    if ((i>='0') && (i<='9'))
    {
        d++;
    }
    else{
        if (i==' ')
        {
            s++;
        }
        else
        {
            char k;
            k=tolower(i);
            if ((k=='a') || (k=='i') || (k=='o') || (k=='u') || (k=='e'))
            {
                v++;
            }
            else{
                c++;
            }
        }
   }
    }   
   cout<<"Digits="<<d<<endl;
   cout<<"Space="<<s<<endl;
   cout<<"Vowels="<<v<<endl;
   cout<<"Consonant="<<c<<endl;

    return(0);
}
