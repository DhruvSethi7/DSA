#include <iostream>
using namespace std;
//ALGO ->FASTPTR AND SLOWPTR WHICH IS BASIC MATHS
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp=temp->next;
    }
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
void middleNode(Node* head){       
    Node* slowptr=head;
    Node* fastptr=head;
    while (fastptr && fastptr->next)
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    cout<<slowptr->data;
}
int main()
{
    Node *head = new Node(10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);//10->20->30->40->50
    middleNode(head);//30
    insertAtTail(head,60);//10->20->30->40->50->60
    middleNode(head);//40
    return 0;
}