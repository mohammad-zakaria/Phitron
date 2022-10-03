#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node *Next;

    Node(int value){
        this->value = value;
        this->Next = NULL;
    }
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
void insertAtTail(Node* &head, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;
}
int main()
{
    //improved linked list
    Node *head = NULL;

    int n;
    char choice = 'Y';
    while (choice == 'Y' || choice == 'y')
    {
        cout<<"Enter the value: ";
        cin>>n;
        insertAtTail(head, n);
        cout<<"Do you want to continue? (Y/N): ";
        cin>>choice;
    }

    
    

    // insertAtTail(head, 1);
    // insertAtTail(head, 5);
    // insertAtTail(head, 8);
    // insertAtTail(head, 9);

    printNode(head);



}