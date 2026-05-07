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
    Node* head=new Node(10);
    Node* first=new Node(20);
    head->next=first;
    //first->next=NULL;

    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    
  
 return 0;
}