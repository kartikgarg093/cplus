#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

int main() {
    cout<<"Enter No. of Nodes: ";
    int n,i,c;
    cin>>n;
    cout<<"Enter Values: ";
    Node* head=NULL;
    for(i=1;i<n+1;i++)
    {
        cin>>c;
        Node* newnode=new Node(c);
        if (head==NULL)
        {
            head=newnode;
        }
        else
        {
            Node* temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    int key;
    cout<<"Enter Element you want to serach: ";
    cin>>key;
    Node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            cout<<"Element Found";
            return 0;
        }
        temp=temp->next;
    }
    cout<<"Element Not Found";
    return 0;

}