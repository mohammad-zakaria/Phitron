/*
    Write down a program that will take n number of input from the users and create a Linear Linked List of n size. 
    Replace all the even numbers in the list with -1 and display the List.
*/

#include<bits/stdc++.h>
using namespace std;

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
// replace even number with -1
void replaceEven(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            temp->data = -1;
        }
        temp = temp->next;
    }
}

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
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    int n;
    cin>>n;

    // head of the list
    Node *head = NULL;

    // insert n number of nodes
    for(int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        insertNode(head, val);
    }
    replaceEven(head);
    display(head);




    return 0;
}