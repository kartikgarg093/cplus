#include <bits/stdc++.h>
using namespace std;

struct Node {
  int coeff;
  int pow;
  Node* next;
};

void create(Node*&, int, int);
void display(Node*);


int main() {
  cout<<"Enter No. of terms in polynomial: ";
  int n;
  cin>>n;
  Node* head = NULL;
  for(int i=1;i<=n;i++)
  {
    int coeff, pow;
    cout<<"Enter Coefficient and Power of term "<<i<<": ";
    cin>>coeff>>pow;
    create(head, coeff, pow);
  }
  cout<<"Polynomial is: ";
  display(head);
 return 0;
}
void create(Node* &head, int coeff, int pow) {
  Node* newnode = new Node();
  newnode->coeff = coeff;
  newnode->pow = pow;
  newnode->next = NULL;
  if (head == NULL) {
    head = newnode;
  } 
  else {
    Node* temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}
void display(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->coeff << "x^" << temp->pow;
    if (temp->next!= NULL) {
      cout << " + ";
    }
    temp = temp->next;

  }
}
