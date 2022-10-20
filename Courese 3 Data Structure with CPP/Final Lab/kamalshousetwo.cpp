#include <bits/stdc++.h>
using namespace std;

class graph
{
    int v;
    list<int> *adj;

public:
    graph(int v)
    {
        this->v = v;
        adj = new list<int>[v];
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    int bfs(int s)
    {
        vector <bool> visited(v, false);
        queue <int> q;

        visited[s] = true;
        q.push(s);
        int count = 0;
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            for (auto i: adj[curr])
            {
                if (!visited[i])
                {
                    visited[i] = true;
                    q.push(i);
                    count++;
                }
            }

        }
        return count;
    }
};

int main ()
{
    int n, e;
    cin >> n >> e;
    graph g(n);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    int k;
    cin >> k;
    cout << g.bfs(k) << endl;
    return 0;
}