#include<bits/stdc++.h>
#include<stack>
#include<queue>


using namespace std;

/*
    input:
    11 3
    1 2 3 4 5 6 7 8 9 10 11
    output: 3 2 1 6 5 4 9 8 7 11 10
*/

void reverseKElements(queue<int> &q, int k, int n)
{
    int x = n/k;
    int y = n%k;
    stack<int> st;
    while (x>0) 
    {
        int check = k;
        while(check>0)
        {
            st.push(q.pop());
            check--;
        }
        while(!st.empty())
        {
            q.push(st.pop());
        }
        x--;
    }

    while (y>0)
    {
        st.push(q.pop());
        y--;
    }
    while (!st.empty())
    {
        q.push(st.pop());
    }

    

}

int main ()
{
    int n; cin>>n;
    int k; cin>>k;
    queue<int> q;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        q.push(x);
    }

    reverseKElements(q, k, n);


    return 0;

}