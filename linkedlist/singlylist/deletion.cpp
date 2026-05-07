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

    int pos;
    cout<<"Enter position of element you want to delete: ";
    cin>>pos;
   if (pos==1)
    {
        Node* temp=head;
        head=temp->next;
    }
    else
    {
        if (pos==n)
        {
            Node* temp=head;
            for(int i=1;i<n-1;i++)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            
        }
        else
        {   Node *temp=head;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
    }
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";




    return 0;
}