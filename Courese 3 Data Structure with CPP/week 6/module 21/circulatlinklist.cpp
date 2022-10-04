#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
    }
};
struct Test
{
    int position[1000];
};

// Initialization of all of the following functions
void printNode(Node *head);
void insertAtHead(Node *&head, int value);
void insertAtTail(Node *&head, int value);

int countNode(Node *head);

void deletionatHead(Node *&head);
void deletionatTail(Node *&head);


// declaration of all functions

void printNode(Node *head)
{
    // display function for for circular linked list
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    do
    {
        cout << temp->value;
        temp = temp->Next;
        if (temp != head)
        {
            cout << "->";
        }
    } while (temp != head);
    cout << endl;
    cout << endl;
}
// function for insert at head for circular linked list
void insertAtHead(Node *&head, int value)
{

    // s1: create a new node
    Node *newNode = new Node(value);
    // s2: make the new node point to the head
    newNode->Next = head;
    // step 3:  update taile with new head
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    // s4: make the head point to the new node
    head = newNode;
}
void insertAtTail(Node *&head, int value)
{

    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }

    Node *temp = head;
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head; // or newNode->Next = temp->Next;
    temp->Next = newNode;
}
// Function to count the lenth of list.
int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do
    {
        count++;
        temp = temp->Next;
    } while (temp != head);

    return count;
}


void deletionatHead(Node *&head)
{

    Node *temp = head;
    if (head != NULL)
    {
        Node *delNode = head;
        while (temp->Next != head)
        {
            temp = temp->Next;
        }
        temp->Next = head->Next;
        head = delNode->Next;
    }
    else
    {
        cout << "List is empty" << endl;
    }

    // defination of uderflow: when the list is empty and we try to delete the element from the list then it is called underflow condition.
}
void deletionatTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != head)
    {
        while (temp->Next->Next != head)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        delete delNode;
        temp->Next = head;
    }
    else
    {
        // head is null
        if (temp == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            // only one node is present
            delete temp;
            head = NULL;
        }
    }
}



int findMid(Node *&head)
{
    // head empty
    if (head == NULL)
    {
        return -1;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->Next != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;
    }
    return slow->value;
}


int main()
{
    // improved linked list
    Node *head = NULL;

    int n, position;
    // Choice 1: Insert at head
    // Choice 2: Insert at tail
    cout << "Choice 1: Insert at head" << endl
         << "Choice 2: Insert at tail: " << endl
         << "Choice 3 Deletion at head: " << endl
         << "Choice 4: deletion at tail: " << endl

         << "Choice 0: Exit" << endl;

    cout << "Next Choice: ";
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> n;
            insertAtHead(head, n);
            break;

        case 2:
            cout << "Enter the value: ";
            cin >> n;
            insertAtTail(head, n);
            break;
        case 3:
            deletionatHead(head);
            break;
        case 4:
            deletionatTail(head);
            break;

        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl
         << "The list is: ";

    printNode(head);

    cout << "Lenght of the list is: " << countLength(head) << endl;
}