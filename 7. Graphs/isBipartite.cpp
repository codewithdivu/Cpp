#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> adj[], int nodes)
{
    for (int i = 1; i <= nodes; i++)
    {
        cout << "node " << i << " --> ";
        for (auto it : adj[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

bool checkBipartite(vector<int> adj[], int nodes, int start)
{
    vector<int> colored(nodes + 1, 0);
    for (int i = 0; i < nodes; i++)
        colored[i] = -1;
    queue<int> dq;
    colored[start] = 0;
    dq.push(start);
    while (!dq.empty())
    {
        int front = dq.front();
        dq.pop();
        for (auto it : adj[front])
        {
            if (colored[it] == -1)
            {
                colored[it] = !colored[front];
                dq.push(it);
            }
            else if (colored[it] == colored[front])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int nodes, edges, direction;
    cout << "enter no of nodes" << endl;
    cin >> nodes;
    cout << "enter no of edges" << endl;
    cin >> edges;
    cout << "enter 1 for directed graph and 0 for undirected graph" << endl;
    cin >> direction;

    vector<int> adj[nodes + 1];

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cout << "enter a node ";
        cin >> u;
        cout << "enter a edge from node " << u << " to ";
        cin >> v;

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    print(adj, nodes);

    if (checkBipartite(adj, nodes, 1))
    {
        cout << "graph is bipartitle" << endl;
    }
    else
    {
        cout << "graph is not bipartitle" << endl;
    }

    return 0;
}
