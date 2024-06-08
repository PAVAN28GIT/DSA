#include <iostream>
#include <vector>

using namespace std;


class graph
{
public:
    // using matrix to store 
    void adj_matrix()
    {
        int n; //  no of nodes
        int m; // no of edges

        cin >> n >> m;
        int adj[n + 1][n + 1];
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }
    }
    // using list to store
    void adj_list()
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> list(n + 1);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            list[u].push_back(v);
            list[v].push_back(u);
        }
    }
};

int main()
{

    graph g1;
    g1.adj_list();
    g1.adj_matrix();

    return 0;
}
