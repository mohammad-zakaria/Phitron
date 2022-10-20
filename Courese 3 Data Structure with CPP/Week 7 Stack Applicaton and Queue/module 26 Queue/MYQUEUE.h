#include <bits/stdc++.h>

using namespace std;

template <typename N> class Node
{
public:
    N value;
    Node *Next;

    Node(N value)
    {
        this->value = value;
        this->Next = NULL;
    }
};
template<typename Q> class Queue
{
    Node<Q> *front;
    Node<Q> *rear;
    int count;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;

    }
    // enqueue --> push
    void push(Q value)
    {
        Node <Q> *newNode = new Node<Q>(value);
        if (front == NULL)
        {
            front = rear = newNode;
            return;
        }
        rear->Next = newNode;
        rear = newNode;
    }

    // dequeue --> pop
    Q pop()
    {
        Q check ;
        // if rear is null then there is no element in the queue
        if (rear == NULL)
        {
            cout << "Queue is empty: Queue Underflow" << endl;
            return check;
        }
        Node <Q> *delNode;
    
        delNode = front;

        front = front->Next;
        if(front == NULL){
            rear = NULL;
        }

        check = delNode->value;
        delete delNode;

        return check;

    }


    // peek --> front() back()

    Q Front()
    {
        Q check;
        check = front->value;
        return check;
    }
    Q Back()
    {
        Q check;
        check = rear-> value;
        return check;
    }

    // isEmpty --> empty()
    bool empty()
    {
        if(rear == NULL){
            return true;
        }
        else return false;
    }

};
