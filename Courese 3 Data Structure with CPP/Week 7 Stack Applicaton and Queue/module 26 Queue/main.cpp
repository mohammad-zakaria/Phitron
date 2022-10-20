#include <bits/stdc++.h>
#include "MYQUEUE.h"

using namespace std;

typedef pair<int, int>mytype;

int main()
{
    Queue <mytype> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c1, c2;
        cin >> c1 >> c2;
        q.push(make_pair(c1, c2));
    }

    // while (!q.empty())
    // {
    //     mytype check;
    //     check = q.pop();
    //     cout << check.first << "|" << check.second << endl;
    // }

    cout << endl
         << endl;

    if (!q.empty())
    {
        mytype check;
        check = q.Front();
        cout << check.first << "|" << check.second << endl;
    }
    if (!q.empty())
    {
        mytype check;
        check = q.Back();
        cout << check.first << "|" << check.second << endl;
    }
}