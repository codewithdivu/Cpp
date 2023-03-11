#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls)
{
    vis[node] = 1;
    ls.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, ls);
        }
    }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    int vis[V] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start, adj, vis, ls);
    return ls;
}

int main(int argc, char const *argv[])
{
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfsOfGraph(V, adj);
    return 0;
}