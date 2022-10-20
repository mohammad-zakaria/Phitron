#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st;
    stack<int> minStack;

    int currMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < currMin)
        {
            minStack.push(arr[i]);
            currMin = arr[i];
        }
        st.push(arr[i]);
    }

    while (!st.empty())
    {
        // if  top of minStack and st is same
        if (st.top() != minStack.top())
        {
            st.pop();
            cout << minStack.top() << endl;
        }
        else
        {
            cout << minStack.top() << endl;
            st.pop();
            minStack.pop();
        }
    }

    return 0;
}
