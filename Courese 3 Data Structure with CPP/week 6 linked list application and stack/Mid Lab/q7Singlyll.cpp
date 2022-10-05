/*
Given a singly linked list of size N. The task is to reverse every k node (where k is an input to the function) in the linked list.
If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed
(See Sample 2 for clarification).
Your task is to complete the function reverseKNodes()
which should reverse the linked list in a group of size k and return the head of the modified linked list.

*/
#include<bits/stdc++.h>
using namespace  std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val)
        {
            this->data = val;
            this->next = NULL;
        }
};
//insert Node
void insertNode(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};
// display the list
void display(Node* head)
{
    Node* temp = head;
    if(temp == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while(temp != NULL)
    {
        cout << temp->data;
        if(temp->next != NULL)
        {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}

// reverse every k nodes
Node* reverseKNodes(Node* &head, int k)
{
    if(!head)
    {
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;
    while(curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL)
    {
        head->next = reverseKNodes(next, k);
    }
    return prev;
}

int main()
{
    Node* head = NULL;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insertNode(head, val);
    }

    int k;
    cin >> k;
    head = reverseKNodes(head, k);
    display(head);

    



    return 0;
}
