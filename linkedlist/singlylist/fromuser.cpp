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

    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
  
 return 0;
} 