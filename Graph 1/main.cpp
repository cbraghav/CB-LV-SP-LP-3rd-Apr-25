#include <bits/stdc++.h>
using namespace std;

/*
void addEdge_Adj_Mat(vector<vector<int>> &adj_mat, int a, int b)
{
    // dir a->b
    adj_mat[a][b] = 1;
    // undir
    adj_mat[b][a] = 1;
}
    */
void addEdge_Adj_List(vector<vector<int>> &g, int a, int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}
void bfs(vector<vector<int>> &g, int k)
{
    cout << "bfs ";
    queue<int> q;
    vector<int> vis(g.size(), 0);

    q.push(k);
    vis[k] = 1;

    while (q.size())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // neigh
        for (auto neigh : g[node])
        {
            if (vis[neigh] == 0)
            {
                vis[neigh] = 1;
                q.push(neigh);
            }
        }
    }

    cout << endl;
}

void dfs(vector<vector<int>> &g, int node, vector<int> &vis)
{

    // node

    if (vis[node] == 1)
    {
        return;
    }

    cout << node << " ";
    vis[node] = 1;

    for (auto i : g[node])
    {
        if (vis[i] == 0)
        {
            dfs(g, i, vis);
        }
    }
}

int main()
{
    ///
    int V = 5;

    // // ADJ MATRIX
    // vector<vector<int>> v(5, vector<int>(5, 0));
    // addEdge_Adj_Mat(v, 1, 2);
    // addEdge_Adj_Mat(v, 2, 3);
    // addEdge_Adj_Mat(v, 2, 4);
    // addEdge_Adj_Mat(v, 3, 4);

    // for (auto vv : v)
    // {
    //     for (auto i : vv)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    vector<vector<int>> v(V);
    addEdge_Adj_List(v, 1, 2);
    addEdge_Adj_List(v, 2, 3);
    addEdge_Adj_List(v, 2, 4);
    addEdge_Adj_List(v, 3, 4);

    for (int i = 0; i < V; i++)
    {
        cout << i << " {";
        for (auto x : v[i])
        {
            cout << x << ",";
        }
        cout << "}" << endl;
    }

    bfs(v, 2);
    vector<int> vis(V, 0);
    cout << "dfs ";
    dfs(v, 3, vis);
}