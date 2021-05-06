#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>&vis,vector<int>&ans,vector< vector<int> >adj)
{
    ans.push_back(node);
    vis[node] = 1;
    for(int i=0;i<adj[node].size();i++){
        if(!vis[adj[node][i]]){
            dfs(adj[node][i], vis,ans,adj);
        }
    }
}
vector<int> dfsOfGraph(int V,vector< vector<int> >adj)
{
    vector<int>ans;
    vector<int>vis(V+1,0);
    for(int i=1;i<=V;i++){//we assume that graph has multiple component else we can omit this loop
        if(!vis[i]){//here start node is 1
            dfs(i,vis,ans,adj);
        }
    }
    return ans;
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector< vector<int> >adj(V+1);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//comment this line if graph is directed
    }

    vector<int>ans = dfsOfGraph(V,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

