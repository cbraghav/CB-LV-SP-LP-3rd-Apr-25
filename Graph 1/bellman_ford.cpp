#include <bits/stdc++.h>

using namespace std;

void addEdge_Adj_List(vector<vector<pair<int, int>>> &g, int a, int b, int wt)
{
    g[a].push_back({b, wt});
    // g[b].push_back({a, wt});
}

vector<int> bellman_ford(int N, vector<vector<int>> edges, int src)
{
    vector<int> dis(N, 1e9);
    dis[src] = 0;
    // proces n-1 times
    for (int i = 0; i < N - 1; i++)
    {
        // traverse over all egdes
        for (auto i : edges)
        {
            int a = i[0];
            int b = i[1];
            int wt = i[2];
            if (dis[b] == 1e9)
            {
                dis[b] = dis[a] + wt;
            }
            else if (dis[a] + wt < dis[b])
            {
                dis[b] = dis[a] + wt;
            }
        }
    }

    // Nth time
    for (auto i : edges)
    {
        int a = i[0];
        int b = i[1];
        int wt = i[2];
        if (dis[b] == 1e9)
        {
            return {};
        }
        else if (dis[a] + wt < dis[b])
        {
            return {};
        }
    }

    return dis;
}

int main()
{
    int N = 6;
    // vector<vector<pair<int, int>>> v(V);
    // addEdge_Adj_List(v, 1, 2, 3);
    // addEdge_Adj_List(v, 1, 3, 5);
    // addEdge_Adj_List(v, 2, 4, 1);
    // addEdge_Adj_List(v, 3, 4, 3);
    // addEdge_Adj_List(v, 4, 6, 6);
    // addEdge_Adj_List(v, 3, 5, 7);
    // addEdge_Adj_List(v, 5, 7, 9);
    // addEdge_Adj_List(v, 7, 9, 1);
    // addEdge_Adj_List(v, 6, 9, 2);
    // addEdge_Adj_List(v, 6, 8, 4);
    // addEdge_Adj_List(v, 8, 9, 1);

    vector<vector<int>> v;
    // v.push_back({a,b,wt});    from a to b with weight wt
    v.push_back({1, 5, 7});
    v.push_back({1, 3, 3});
    v.push_back({5, 3, 2});
    v.push_back({3, 2, 1});
    v.push_back({3, 4, 5});
    v.push_back({2, 4, 1});
    vector<int> mis_dis = bellman_ford(N, v, 1);

    for (auto i : mis_dis)
    {
        cout << i << " ";
    }
    cout << endl;
}