#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
               int c=a[j];
               a[j]=a[j+1];
               a[j+1]=c;

            }
        }
    }
    cout<<"sorted array is:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}