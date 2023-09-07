#include<iostream>
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
bool detectCycle(Node *head)
{
    if(head==nullptr &&head->next==nullptr)return false;
    Node* slowptr=head;
    Node* fastptr=head;
    while(fastptr &&fastptr->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr){
            return true;
        }
    }
    return false;
}
int main()
{
 return 0;
}