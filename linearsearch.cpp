#include <iostream>
using namespace std;

int main(){
    int n,key,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            cout<<"Key found at index: "<<i<<endl;
            return 0;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;
}