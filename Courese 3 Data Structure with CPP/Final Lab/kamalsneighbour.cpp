#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;

    vector<vector<int>> adj(n, vector<int>());
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int k;
    cin>>k;

    cout<<adj[k].size()<<endl;
    return 0;
}