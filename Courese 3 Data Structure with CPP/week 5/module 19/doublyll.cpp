#include <bits/stdc++.h>
using namespace std;

class DoublyNode
{
public:
    int value;
    DoublyNode *next;
    DoublyNode *prev;
    DoublyNode(int data)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(DoublyNode *&head, int value)
{
    // s1: Create a new node
    DoublyNode *newNode = new DoublyNode(value);
    // s2: update of head
    head->prev = newNode;
    // s3: update of newNode->next
    newNode->next = head;
    // s4: update of head
    head = newNode;
}
void insertAtTail(DoublyNode *&head, int value)
{
    DoublyNode *newNode = new DoublyNode(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    DoublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void printList(DoublyNode *head)
{
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
        {
            cout << "<->";
        }
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    DoublyNode *head = NULL;
    int value;
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be inserted at head: ";
            cin >> value;
            insertAtHead(head, value);

            break;
        case 2:
            cout << "Enter the value to be inserted at tail: ";
            cin >> value;
            insertAtTail(head, value);
            break;

        default:
            break;
        }

        printList(head);
    }
}