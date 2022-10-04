#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *Next;
};

void printNode(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->value;
        if(temp ->Next != 0) cout<<" -> ";
        temp = temp->Next;
    }
    cout<<endl;
    cout<<endl;
}
int main()
{
    // Creating a linked list of 1 5 8 9
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->value = 1;
    head->Next = second;
    second->value = 5;
    second->Next = third;

    third->value=8;
    third->Next = fourth;

    fourth->value = 9;
    fourth->Next=NULL;

    printNode(head);

    return 0;
}