#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};

void insertAtPosition(Node* head,int position,int value)
{
    Node* newnode=new Node();
    newnode->data=value;


    Node* temp=head;
    int i=1;

    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }
    
    newnode->next=temp->next;
    temp->next=newnode;


}

int main()
{
    Node* node1=new Node();
    Node* node2=new Node();
    Node* node3=new Node();

    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;

    cout<<"enter node 1:";
    cin>>node1->data;
    cout<<"enter node 2:";
    cin>>node2->data;
    cout<<"enter node 3:";
    cin>>node3->data;

    int value,position;
    cout<<"Enter value:";
    cin>>value;

    cout<<"Enter position:";
    cin>>position;

    Node* head=node1;

    insertAtPosition(head,position,value);
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}