// PROBLEM NAME: Breadth First Search: Shortest Reach (Graph Theory) at HackerRank Copyright.
// SUBMITTED BY: Jishan Shaikh
// LEVEL: Experienced in C++
// =========================
// What to learn?
// Implementation of Breadth first search in adjacency matrix representation
// =========================================================================

#include <bits/stdc++.h>

using namespace std;

vector <int> edge[1999];

int main(){
    int t, n, m, x, y, s, i;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i=0; i<n+3; i++)
            edge[i].clear();
        for(i=0; i<m; i++){         // x and y are the vertices of which edge exists
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        cin >> s;
        
        bool vis[n+1];
        memset(vis, false, sizeof(vis));    // Initialising all values of vis to false i.e. not visited
    
        int dist[n+1];
        memset(dist, 0, sizeof(dist));      // Initialising all values of dist to 0;
    
        list <int> q;
        q.push_back(s);
        vis[s]=true;
        dist[s]=0;
        while(!q.empty()){
            int u=q.front();
            q.pop_front();
            for(i=0; i<edge[u].size(); i++){
                int v=edge[u][i];
                if(!vis[v]){
                    vis[v]=true;
                    dist[v]=dist[u]+6;      // Weight of edge is 6 (given)
                    q.push_back(v);
                }
            }
        }
        for(i=1; i<=n; i++){
            if(i!=s){
                if(dist[i]==0)
                    cout<<"-1 ";
                else
                cout << dist[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
