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
    
}