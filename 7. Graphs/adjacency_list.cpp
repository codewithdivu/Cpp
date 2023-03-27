#include <bits/stdc++.h>
using namespace std;

// ------------------------------USING UNORDERED_MAP----------------------------

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        /* if direction
            0 -> undirected
            1 -> directed
        */

        // creating edge from u to v

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printGraph()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    int n, m;

    cout << "enter the no of nodes" << endl;
    cin >> n;
    cout << "enter the no of edges" << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "enter node ";
        cin >> u;
        cout << "enter edge from " << u << " to ";
        cin >> v;

        // creating undirected graph
        g.addEdge(u, v, 0);

        g.printGraph();
    }
    return 0;
}

// ------------------------------USING VECTOR----------------------------

int main(int argc, char const *argv[])
{
    int n, m;

    cout << "enter the no of nodes" << endl;
    cin >> n;
    cout << "enter the no of edges" << endl;
    cin >> m;

    vector<int> adj[n + 1];

    // Undirected graph

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Directed graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    return 0;
}
