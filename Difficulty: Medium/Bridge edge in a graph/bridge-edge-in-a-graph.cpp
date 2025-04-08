//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int timer;
    vector<int> tin, low;
    unordered_map<int, bool> vis;

    bool dfs(int src, int parent, vector<int> adj[], int c, int d) {
        vis[src] = 1;
        tin[src] = low[src] = timer++;
        
        for (auto child : adj[src]) {
            if (child == parent) 
                continue;
            
            if (!vis[child]) {
                if (dfs(child, src, adj, c, d)) 
                    return true;
                
                low[src] = min(low[src], low[child]);
                
                if (low[child] > tin[src]) {
                    if ((src == c && child == d) || (src == d && child == c))
                        return true;
                }
            } else {
                low[src] = min(low[src], tin[child]);
            }
        }
        return false;
    }

    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        vector<int> adj[V];
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        timer = 0;
        tin.resize(V, -1);
        low.resize(V, -1);
        vis.clear();

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, -1, adj, c, d)) 
                    return true;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        vector<vector<int>> edges(E);
        int i = 0;
        while (i++ < E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i - 1].push_back(u);
            edges[i - 1].push_back(v);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        bool l = obj.isBridge(V, edges, c, d);
        if (l)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends