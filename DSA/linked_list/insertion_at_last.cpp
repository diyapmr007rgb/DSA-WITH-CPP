#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void insertAtEnd(Node* head, int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

int main()
{
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    cout << "Enter Node 1: ";
    cin >> node1->data;

    cout << "Enter Node 2: ";
    cin >> node2->data;

    cout << "Enter Node 3: ";
    cin >> node3->data;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    Node* head = node1;

    cout << "Enter value to add at end: ";
    int value;
    cin >> value;

    insertAtEnd(head, value);

    Node* temp = head;

    cout << "Linked List: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}