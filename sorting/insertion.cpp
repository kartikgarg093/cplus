#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter size of array: ";
    int a[n];
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
      int  temp=a[i];
        for(j=i-1;j>-1;j--)
        {
            if(a[j]>a[i])
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
            else
            {
                break;
            }
        }
    }
    cout<<"sorted array is:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}