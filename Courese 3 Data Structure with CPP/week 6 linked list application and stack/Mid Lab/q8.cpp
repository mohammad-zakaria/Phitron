/*
Given a linked list of size K and two integers M and N. 
Traverse the linked list such that you retain M nodes 
then delete the next N nodes, 
continue the same till the end of the linked list.
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

// delete N nodes after M nodes
void deleteNafterM(Node* &head, int M, int N)
{
    Node* temp = head;
    while(temp != NULL)
    {
        for(int i = 1; i < M && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            return;
        }
        Node* t = temp->next;
        for(int i = 1; i <= N && t != NULL; i++)
        {
            Node* x = t;
            t = t->next;
            delete x;
        }
        temp->next = t;
        temp = t;
    }
}
// main function

int main()
{
    Node* head = NULL;
    int n, val;
    // input the number of nodes
    cin >> n;
    int M, N;
    // 
    cin >> M >> N;
    // input the values of nodes
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        insertNode(head, val);
    }

    deleteNafterM(head, M, N);
    display(head);
    return 0;
}