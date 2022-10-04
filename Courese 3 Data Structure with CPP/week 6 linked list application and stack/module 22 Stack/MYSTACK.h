#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node *Next;
    Node *Prev;

    Node(int value){
        this->value = value;
        this->Next = NULL;
        this->Prev = NULL;
    }
};

class Stack{
    Node *head;
    Node *top;
    int count;

public:
    Stack(){
        head = NULL;
        top = NULL;
        count = 0;
    }

    //push
    void push(int value){
        Node *newNode = new Node{value};
        if(head == NULL){
            head = top = newNode;
            count++;
            return;
        }
        top -> Next = newNode;
        newNode->Prev = top;
        top = newNode;
        count++;
    }

    //pop
    int pop(){
        Node *delNode;
        delNode= top;

        int check;
            // there is no element in the stack
        if(head == NULL){
            cout<<"Stack is empty: Stack Underflow"<<endl;
            return -1;
        }

        if(top == head) // there is only one node 
        {
            head = top = NULL;
        }
        else{ // there are more than one node
            top = top->Prev;
            top->Next = NULL;
        }
        check = delNode->value;
        delete delNode;
        count--;
        return check;

    }
    //empty operation
    bool empty(){
        if(head == NULL){
            return true;
        }
        return false;
    }

    //size
    int size(){
        return count;
    }

    //top operation
    int Top(){
        int check;
        if(head == NULL){
            cout<<"Stack is empty: Stack Underflow"<<endl;
            check = -1;
        }
        else check = top->value;
        return check;
    }
};