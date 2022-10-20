/*
    Know Your Level
    This program will ask the use to enter two numbers n and e.
    then next e lines will contain two numbers a and b.
    and last line l will contain  another number, the level of zaman
*/
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int data;
    list<int> *adj;

public:
    Graph(int data)
    {
        this->data = data;
        adj = new list<int>[data];
    }
    void addEdge(int a, int b)
    {
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    void bfs(int s, int lev)
    {
        vector<bool> visited(data, false);
        queue<int> q;
        int level = 0;
        visited[s] = true;
        q.push(s);
        q.push(-1);
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            if (curr != -1)
            {
                if (level == lev)
                {
                    cout << curr << " ";
                }
                else
                {
                    for (auto i : adj[curr])
                    {
                        if (!visited[i])
                        {
                            visited[i] = true;
                            q.push(i);
                        }
                    }
                }
            }
            else
            {

                if (!q.empty())
                {
                    q.push(-1);
                    level++;
                }
            }
        }
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    Graph g(n);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }
    int l; cin>>l;
    g.bfs(0, l);
    

    return 0;
}
