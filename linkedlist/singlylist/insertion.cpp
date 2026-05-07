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
    cout<<"enter No. of Nodes: ";
    int n,i,c;
    cin>>n;
    Node* head=NULL;
    cout<<"Enter Values: ";
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
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    int pos;
    cout<<"Enter Position you want to insert: ";
    cin>>pos;
    int value;
    cout<<"Enter Element you want to insert: ";
    cin>>value;
    Node* add=new Node(value);

    if (pos==1)
    {
        add->next=head;
        head=add;
    }
    else
    {
        if (pos==n)
        {    
            Node* temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=add;
        }
        else
        {
            Node* temp=head;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            add->next=temp->next;
            temp->next=add;
        }
    }
    Node* temp=head;
    while (temp!=NULL)    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}