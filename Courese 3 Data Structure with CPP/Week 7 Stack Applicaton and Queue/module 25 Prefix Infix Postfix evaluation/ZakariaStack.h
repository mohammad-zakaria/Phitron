#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node{
public:
    N value;
    Node *Next;
    Node *Prev;

    Node(N value){
        this->value = value;
        this->Next = NULL;
        this->Prev = NULL;
    }
};

// stack <float> st? or other data type
template <typename S> class Stack{
    Node <S> *head;
    Node <S>  *top;
    int count;

public:
    Stack(){
        head = NULL;
        top = NULL;
        count = 0;
    }

    //push
    void push(S value){
        Node <S> *newNode = new Node <S> (value);
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
    S pop(){
        Node <S> *delNode;
        delNode= top;

        S check;
            // there is no element in the stack
        if(head == NULL){
            cout<<"Stack is empty: Stack Underflow"<<endl;
            return check;
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
    S Top(){
        S check;
        if(head == NULL){
            cout<<"Stack is empty: Stack Underflow"<<endl;

        }
        else check = top->value;
        return check;
    }

};