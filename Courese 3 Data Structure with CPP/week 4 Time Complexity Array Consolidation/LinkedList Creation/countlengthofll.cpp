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

void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->Next != 0)
            cout << " -> ";
        temp = temp->Next;
    }
    cout << endl;
    cout << endl;
}
void insertAtHead(Node *&head, int value)
{

    // s1: create a new node
    Node *newNode = new Node(value);
    // s2: make the new node point to the head
    newNode->Next = head;
    // s3: make the head point to the new node
    head = newNode;
}
void insertAtTail(Node *&head, int value)
{

    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
// print linked list in reverse order
void printReverse(Node *head)
{
    // base case
    if (head == NULL)
        return;
    // recursive case
    printReverse(head->Next);
    // print the value
    cout << head->value << " ";
}
// Function to count the lenth of list.
int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void insertionAtSpecificPosition(Node *&head, int pos, int value)
{
    int i = 0;
    Node *temp = head;
    while (i < pos - 1)
    {
        temp = temp->Next; // 2 3
        i++;               // 1 2
    }

    Node *newNode = new Node(value);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
int searchByValUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;
    if (temp == NULL)
        return -1;
    while (temp->value != key)
    {
        if (temp->Next == NULL)
            return -1;
        count++;
        temp = temp->Next;
    }
    return count;
}

// search by value from duplicate list
void searchByValueDuplicate(Node *&head, int key)
{
    Node *temp = head;
    int size;
    size = countLength(head);
    int position[size+1] = {0}; int k = 1;
    int count = 1;
    int flag = 0;
    while(temp != NULL){
        if(temp->value == key){
            // cout<<count<<" ";

            position[k] = count; 
            k++;

            flag = 1;
        }
        temp = temp->Next;
        count++;

    }
    cout<<endl;
    if(flag == 0){
        cout<<"Serached value not found at the list";
    }
    else{
        position[0] = k;
        cout<<"The value is found at: ";
        for (int i =  1; i < position[0]; i++)
        {
            cout<<position[i]<<" ";
            if(i<position[0]-1)
                cout<<", ";
        }
        
    }
    cout<<endl;
 }

int main()
{
    // improved linked list
    Node *head = NULL;

    int n;
    // Choice 1: Insert at head
    // Choice 2: Insert at tail
    cout << "Choice 1: Insert at head" << endl
         << "Choice 2: Insert at tail: " << endl
         << "Choice 3 Inserat specific Position: " << endl
         << "Choice 4: Search a value for unique list: " << endl
         << "Choice 5: Search a value for duplicate list: " << endl;

    int choice;
    int position;
    cout<<"Enter the choice: ";
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
            cout << "Enter Desired Position: ";
            cin >> position;
            cout << "Enter the value: ";
            cin >> n;
            insertionAtSpecificPosition(head, position, n);
            break;
        case 4:
            cout << "Enter Desired value to search: ";
            cin >> n;
            position = searchByValUnique(head, n);
            if (position == -1)
                cout << "Value not found" << endl;
            else
                cout << "Value found at position: " << position << endl;
            break;
        case 5:
            cout << "Enter Desired value to search: ";
            cin >> n;
            searchByValueDuplicate(head, n);
            // position = searchByValUnique(head, n);
            // if (position == -1)
            //     cout << "Value not found" << endl;
            // else
            //     cout << "Value found at position: " << position << endl;
            break;

        default:
            break;
        }
        // cout<<"Choice 1: Insert at head or Choice 2: Insert at tail or Choice 3: Insert at specific position: "<<"Choice 0 Exist"<<endl;
        cout << "Next Choice: ";
        cin >> choice;
    }

    printNode(head);
    printReverse(head);
    cout << endl;
    cout << "Lenght of the list is: " << countLength(head) << endl;
}