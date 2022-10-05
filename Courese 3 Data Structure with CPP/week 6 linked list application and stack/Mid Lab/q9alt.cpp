/*
Doubly linked list is one of the fundamental data structures.
A doubly linked list is a sequence of elements, each containing information about the previous and the next elements of the list. 
In this problem, all lists have a linear structure i.e. each element except the first has exactly one previous element, and each element except the last has exactly one next element. 
The list is not closed in a cycle.
In this problem, you are given n memory cells forming one or more doubly linked lists. 
Each cell contains information about an element from some list. Memory cells are numbered from 1 to n.

*/

#include <bits/stdc++.h>
using namespace std;

const int
    totalSize = 110;

class Node{
    public:
        int data;
        int prev;
        int next;
};
Node node[totalSize];
int n;
queue<int> Queue;
int depthFirstSearch(int element)
{
    if (node[element].next == 0)
    {
        return element;
    }
    return depthFirstSearch(node[element].next);
}
int main ()
{
    int mark;
    int m;
    while(1)
    {
        cin>>n;
        mark = 1;
        while(!Queue.empty())
        {
            Queue.pop();
        }
        for(int i = 1; i <= n; i++)
        {
            cin>>node[i].prev >> node[i].next;
            node[i].data = i;
            if(!node[i].prev)
            {
                Queue.push(i);
            }

        }
        while(!Queue.empty())
        {
            int current;
            current = Queue.front();
            Queue.pop();
            if(!mark)
            {
                node[current].prev = m;
                node[m].next = current;
            }
            mark = 0;
            m = depthFirstSearch(current);
        }
        for(int i = 1; i <= n; i++)
        {
            cout<<node[i].prev<<" "<<node[i].next<<endl;
        }
    }
    

    return 0;
}