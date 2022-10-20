#include <bits/stdc++.h>
using namespace std;

// Binary Tree node
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>> pq1;
    pq1.push(n);

    priority_queue<int, vector<int>> pq2;
    pq2.push(n);

    while (!pq1.empty())
    {

        pq1.pop();

        int leftIndex, rightIndex;
        cin >> leftIndex >> rightIndex;

        if (leftIndex != -1)
        {
            pq1.push(leftIndex);
            pq2.push(leftIndex);
        }
        if (rightIndex != -1)
        {
            pq1.push(rightIndex);
            pq2.push(rightIndex);
        }
    }
    int query;
    cin >> query;

    while (query--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int k;
            cin >> k;

            pq2.push(k);
        }
        else if (type == 2)
        {
            cout << pq2.top() << endl;

            pq2.pop();
        }
    }

    return 0;
}