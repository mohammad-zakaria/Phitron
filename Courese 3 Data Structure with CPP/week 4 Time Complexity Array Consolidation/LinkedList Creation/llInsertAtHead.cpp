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

void insertAtHead(Node *&head, int value){
    
     // s1: create a new node
    Node *newNode = new Node(value);
    //s2: make the new node point to the head
    newNode->Next = head;
    //s3: make the head point to the new node
    head = newNode;
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
// print linked list in reverse order
void printReverse(Node *head){
    //base case
    if(head == NULL) return;
    //recursive case
    printReverse(head->Next);
    //print the value
    cout<<head->value<<" ";
}
int main()
{
    //improved linked list
    Node *head = NULL;

    int n;
    // Choice 1: Insert at head
    // Choice 2: Insert at tail
    cout<<"Choice 1: Insert at head or Choice 2: Insert at tail: "<<"Choice 3 Exist"<<endl;
    int choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout<<"Enter the value: ";
        cin>>n;

        if(choice == 1){
            insertAtHead(head, n);
        }
        else if(choice == 2){
            insertAtTail(head, n);
        }
        cout<<"Next Choice: ";
        cin>>choice;
    }

    
    

    // insertAtTail(head, 1);
    // insertAtTail(head, 5);
    // insertAtTail(head, 8);
    // insertAtTail(head, 9);

    printNode(head);
    printReverse(head);



}