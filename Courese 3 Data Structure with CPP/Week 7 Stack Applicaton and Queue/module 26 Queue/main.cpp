#include <bits/stdc++.h>
#include "MYQUEUE.h"

using namespace std;

int main ()
{
    Queue <int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    while (!q.empty())
    {
        cout << q.pop() << endl;
    }

    cout<<endl<<endl;

    if(!q.empty()){
        cout << q.Front() <<endl;
    }
    if(!q.empty()){
        cout << q.Back() <<endl;
    }


}