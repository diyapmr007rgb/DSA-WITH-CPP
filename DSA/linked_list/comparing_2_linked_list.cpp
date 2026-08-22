#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void compare(Node* head1,Node* head2)
{
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            cout<<"Lists are not same";
            return;
        }

        head1=head1->next;
        head2=head2->next;
    }

    if(head1==NULL && head2==NULL)
    {
        cout<<"Lists are same";
    }
    else
    {
        cout<<"Lists are not same";
    }
}

int main()
{
    Node* node1=new Node();
    Node* node2=new Node();
    Node* node3=new Node();

    Node* node4=new Node();
    Node* node5=new Node();
    Node* node6=new Node();

    cout<<"Enter List 1 node1:";
    cin>>node1->data;

    cout<<"Enter List 1 node2:";
    cin>>node2->data;

    cout<<"Enter List 1 node3:";
    cin>>node3->data;

    cout<<"Enter List 2 node1:";
    cin>>node4->data;

    cout<<"Enter List 2 node2:";
    cin>>node5->data;

    cout<<"Enter List 2 node3:";
    cin>>node6->data;

    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;

    node4->next=node5;
    node5->next=node6;
    node6->next=NULL;

    Node* head1=node1;
    Node* head2=node4;

    compare(head1,head2);

    return 0;
}