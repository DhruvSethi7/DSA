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
    ~Node(){
        cout<<"Memory frred";
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
void deleteAtHead(Node* &head){
   Node* temp=head;
   head=head->next;
   temp->next=nullptr;
   delete temp;
}
int main()
{
 Node* head=new Node(10);
 deleteAtHead(head);
 printNode(head);
 return 0;
}