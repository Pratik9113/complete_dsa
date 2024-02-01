#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printadjlist()
    {
        for (auto it : adj)
        {
            cout << it.first << "->";
            for (auto j : it.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    int m;
    graph g;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printadjlist();
}