#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void insertAtBeginning(Node* &head,int value)
{
    Node* newNode=new Node();

    newNode->data=value;
    newNode->next=head;

    head=newNode;
}
int main()
{
    Node* node1=new Node();
     Node* node2=new Node();
      Node* node3=new Node();

    cin>>node1->data;
    cin>>node2->data;
    cin>>node3->data;

    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;

    
    Node* head=node1;

     Node* temp=head;

     cout<<"Original List:";
     while(temp!=NULL)
     {
        cout<<temp->data<<"  ";
        temp=temp->next;
     }

    int value;

    cout<<"\n\nEnter the value of node to be add at beginning:";
    cin>>value;

    insertAtBeginning(head,value);
    temp=head;
    cout<<"\nInsertion:";

     while(temp!=NULL)
     {
        cout<<temp->data<<"  ";
        temp=temp->next;
     }


    return 0;


}