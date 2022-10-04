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
void printReverse(Node *head);
int countNode(Node *head);
void insertionAtSpecificPosition(Node *&head, int value, int position);
int searchByValueUnique(Node *head, int value);
Test searchByValueDuplicateTest(Node *head, int value);
void insertByValueUnique(Node *&head, int searchValue, int value);
void deletionatHead(Node *&head);
void deletionatTail(Node *&head);
void deletionatSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int value);

// declaration of all functions

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
void searchByValueDuplicateNotReturn(Node *&head, int key)
{
    Node *temp = head;
    int size;
    size = countLength(head);
    int position[size + 1] = {0};
    int k = 1;
    int count = 1;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout<<count<<" ";

            position[k] = count;
            k++;

            flag = 1;
        }
        temp = temp->Next;
        count++;
    }
    cout << endl;
    if (flag == 0)
    {
        cout << "Serached value not found at the list";
    }
    else
    {
        position[0] = k;
        cout << "The value is found at: ";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i] << " ";
            if (i < position[0] - 1)
                cout << ", ";
        }
    }
    cout << endl;
}

// search by value from duplicate list and return the positions

Test searchByValueDuplicateReturn(Node *&head, int key)
{
    Node *temp = head;
    Test T;
    int k = 1;
    int count = 1;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout<<count<<" ";

            T.position[k] = count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    T.position[0] = k;
    return T;
}

void insertByValueUnique(Node *&head, int searchValue, int value)
{
    // step 1: find the position of the search value
    int position = searchByValUnique(head, searchValue);
    // step 2: insert the value at the position+1
    insertionAtSpecificPosition(head, position + 1, value);
}
void deletionatHead(Node *&head)
{

    Node *temp = head;
    if (head != NULL)
    {
        head = head->Next;
        delete temp;
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
    if (temp != NULL && temp->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        delete temp->Next;
        temp->Next = NULL;
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

void deletionatSpecificPosition(Node *&head, int position)
{
    Node *temp = head;

    int i = 1;
    if (position <= countLength(head))
    {
        while (i < position - 1)
        {
            temp = temp->Next;
            i++;
        }
        Node *delNode = temp->Next; // delete this node
        temp->Next = delNode->Next; // make the previous node point to the next node of the delete node
        delete delNode;
    }
    else
    {
        // position is greater than the length of the list

        cout << "Position is out of range" << endl;
    }
}

void deletionByValueUnique(Node *&head, int value)
{
    // step 1: find the position of the value
    int position = searchByValUnique(head, value);
    // step 2: delete the node at that position
    if (position == -1)
    {
        cout << "Value not found in the list" << endl;
    }
    else
    {
        deletionatSpecificPosition(head, position);
    }
}
void display_list(Node *n)

{

    while (n != NULL)

    {

        cout << n->value;
        cout << "->";
        n = n->Next;
    }
}
Node *reverseNoneRecursive(Node *&head) // NULL || Next = NULL
{
    Node *prev = NULL;
    Node *current = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return head;
    }
    Node *next = head->Next;

    while (true)
    {
        current->Next = prev;
        prev = current;
        current = next;
        if (current == NULL)
            break;
        next = next->Next;
    }
    return prev;
}

Node *reverseRecursive(Node *&head)
{
    // base call for the recursive function
    if (head == NULL || head->Next == NULL)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        return head;
    }
    // recursive call
    Node *newHead = reverseRecursive(head->Next);
    head->Next->Next = head;
    head->Next = NULL;

    return newHead;
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

void makeCycle(Node *&head, int pos)
{
    Node *temp = head;
    Node *startNode;
    int count = 1;
    while (temp->Next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->Next;
        count++;
    }
    temp->Next = startNode;
}

// detect cycle in the linked list
bool detectCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->Next != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;

        // cycle check
        if (slow->Next == fast->Next)
        {
            return true;
        }
    }
    return false;
}
// remove cycle function
void removeCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    // step 1: find the meeting point i.e fast == slow a 

    do
    {
        slow = slow->Next;
        fast = fast->Next->Next;
    } while (slow != fast);

    // step 2: move fast to head and keep slow at the meeting point
    fast = head;
    // step 3: move both slow and fast one step at a time

    while (slow->Next != fast->Next)
    {
        slow = slow->Next;
        fast = fast->Next;
    }
    slow->Next = NULL;
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
         << "Choice 3 Inserat specific Position: " << endl
         << "Choice 4: Search a value for unique list: " << endl
         << "Choice 5: Search a value for duplicate list: " << endl
         << "Choice 6: Insertion by value: " << endl
         << "Choice 7: Deletion at head: " << endl
         << "Choice 8: Deletion at tail: " << endl
         << "Choice 9: Deletion at specific position: " << endl
         << "Choice 10: Deletion by value from unique list: " << endl
         << "Choice 11: Reversal list Non recursive: " << endl
         << "Choice 12: Find mid  Slow-fast: " << endl
         << "Choice 13: Make cycle: " << endl
         <<"Choice 14: Detect Cycle: "<<endl
         << "Choice 15: Remove Cycle: " << endl

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
            Test T;
            T = searchByValueDuplicateReturn(head, n);
            if (T.position[0] == 1)
                cout << "Value not found" << endl;
            else
            {
                cout << "Value found at position: ";
                for (int i = 1; i < T.position[0]; i++)
                {
                    cout << T.position[i] << " ";
                    if (i < T.position[0] - 1)
                        cout << ", ";
                }
                cout << endl;
            }
            break;
        case 6:
            cout << "Enter Desired value to search: ";
            int searchValue;
            cin >> searchValue;
            cout << "Enter the value to insert: ";
            cin >> n;
            insertByValueUnique(head, searchValue, n);
            break;
        case 7:
            deletionatHead(head);
            break;
        case 8:
            deletionatTail(head);
            break;
        case 9:
            if (head == NULL)
            {
                cout << "List is empty" << endl;
                break;
            }
            cout << "Enter Desired Position: ";
            cin >> position;
            deletionatSpecificPosition(head, position);
            cout << endl;
            printNode(head);
            break;
        case 10:
            if (head == NULL)
            {
                cout << "List is empty" << endl;
                break;
            }
            cout << "Enter Desired value to delete: ";
            int delValue;
            cin >> delValue;
            deletionByValueUnique(head, delValue);
        case 11:
            head = reverseNoneRecursive(head);
            break;
        case 12:
            int mid;
            mid = findMid(head);
            if (mid == -1)
                cout << "List is empty" << endl;
            else
                cout << "Mid is: " << mid << endl;
            break;
        case 13:
            cout << "Enter the desired postion to cycle :";
            cin >> position;
            makeCycle(head, position);
            break;
        case 14:
            bool cycleStatus;
            cycleStatus = detectCycle(head);
            if (cycleStatus == true)
                cout << "There is a cycle in the list. " << endl;
            else
                cout << "No cycle in the list. " << endl;
            break;
        case 15:
            cycleStatus = detectCycle(head);
            if(cycleStatus==true)
            {
                cout<<"Cycle detected and removed"<<endl;
                removeCycle(head);
            }
            else
            {
                cout<<"No cycle detected"<<endl;
            }
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