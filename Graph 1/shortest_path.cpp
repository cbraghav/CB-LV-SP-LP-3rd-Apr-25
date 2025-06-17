#include <bits/stdc++.h>

using namespace std;

void addEdge_Adj_List(vector<vector<pair<int, int>>> &g, int a, int b, int wt)
{
    g[a].push_back({b, wt});
    // g[b].push_back({a, wt});
}

// vector<int> min_dist(vector<vector<int>> &g, int src)
// {

//     int N = g.size();
//     queue<int> q;
//     q.push(src);
//     vector<int> dis(N, 1e9);
//     dis[src] = 0;

//     while (q.size())
//     {
//         int node = q.front();
//         q.pop();
//         for (auto neigh : g[node])
//         {
//             // vis
//             if (dis[node] + 1 < dis[neigh])
//             {
//                 dis[neigh] = dis[node] + 1;
//                 q.push(neigh);
//             }
//         }
//     }
//     return dis;
// }

vector<int> min_dist_wt(vector<vector<pair<int, int>>> &g, int sr)
{
    int N = g.size();
    vector<int> dis(N, 1e9);

    set<pair<int, int>> st;
    // wt, node

    st.insert({0, sr});
    dis[sr] = 0;

    while (st.size())
    {

        int node = (*(st.begin())).second;
        int curr_dis = (*(st.begin())).first;
        st.erase(*st.begin());

        // cout << node << " ";

        // neigh
        for (auto neigh : g[node])
        {
            int neig_node = neigh.first;
            int edge_wt = neigh.second;

            if (dis[neig_node] > curr_dis + edge_wt)
            {
                st.erase({dis[neig_node], neig_node});

                dis[neig_node] = curr_dis + edge_wt;

                st.insert({dis[neig_node], neig_node});
            }
        }
    }

    return dis;
}

int main()
{
    int V = 6;
    vector<vector<pair<int, int>>> v(V);

    addEdge_Adj_List(v, 1, 5, 7);
    addEdge_Adj_List(v, 1, 3, 3);
    addEdge_Adj_List(v, 5, 3, 2);
    addEdge_Adj_List(v, 3, 2, 1);
    addEdge_Adj_List(v, 3, 4, 5);
    addEdge_Adj_List(v, 2, 4, 1);

    // addEdge_Adj_List(v, 1,5,7);
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

    vector<int> mis_dis = min_dist_wt(v, 1);

    for (auto i : mis_dis)
    {
        cout << i << " ";
    }
    cout << endl;
}