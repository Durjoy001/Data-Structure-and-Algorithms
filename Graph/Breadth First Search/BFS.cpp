#include<bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int V,vector<vector<int> >adj)
{
    vector<int>bfs;
    vector<int>vis(V+1,0);
    for(int i=1;i<=V;i++){
    //We have to write this loop to assume that graph has multiple component.
    //sometimes two or multiple part of a graph are disconnected from one another and this disconnected
    //part are called component.If in graph there has no disconnected component then we can omit this loop.
        if(!vis[i]){
    //Number of time code comes inside this if statement are number of component of this graph.
            queue<int>q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                for(int i=0;i<adj[node].size();i++){
                    if(!vis[adj[node][i]]){
                        q.push(adj[node][i]);
                        vis[adj[node][i]] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector<vector<int> >adj(V+1);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//comment this line if graph is directed
    }
    vector<int>ans = bfsOfGraph(V,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
