#include <iostream>
using namespace std;

int main(){
    int i,n,mid,low,high,key;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key to be searched: ";
    cin>>key;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==key)
        {
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else
        {
            if (a[mid]>key)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    cout<<"Element not found";
    return 0;
}