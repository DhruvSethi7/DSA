#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printNode(Node* head){
    Node* temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    
}
void insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}
void insertAtTail(Node* head,int data){
    Node* newNode=new Node(data);
    Node* temp=head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
int main()
{
 Node* head=new Node(10);
//  insertAtHead(head,20);
//   insertAtHead(head,20);
//    insertAtHead(head,20);
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
   printNode(head);
 return 0;
}