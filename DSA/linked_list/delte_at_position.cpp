#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

};

void delteAtPosition(Node* head,int position)
{
    Node* temp=head;
    for(int i=1;i<position-1;i++)
    {
        temp=temp->next;
    }
     Node* deletenode=temp->next;
     temp->next=temp->next->next;
     delete deletenode;
   
   
}

int main()
{
    Node* node1=new Node();
    Node* node2=new Node();
    Node* node3=new Node();

   cout<<"Enter node1:";
   cin>>node1->data;
   cout<<"Enter node2:";
   cin>>node2->data;
   cout<<"Enter node 3:";
   cin>>node3->data;

   node1->next=node2;
   node2->next=node3;
   node3->next=NULL;

    Node* head=node1;
    Node* temp=head;

    cout<<"Original list:";

       while(temp!=NULL)
       {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
       delteAtPosition(head,2);
       cout<<"After deletion:";
       temp=head;
       while(temp!=NULL)
       {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }

       return 0;
}
