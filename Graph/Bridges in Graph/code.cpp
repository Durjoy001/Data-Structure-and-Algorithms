#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int parent,vector<int>&vis,vector<int>&tin,vector<int>&low,int &timer,vector<int> adj[]){
    vis[node] = 1;
    tin[node] = low[node] = timer++;
    for(auto it : adj[node]){
        if(it == parent){//we came from this node
            continue;
        }
        if(!vis[it]){
            dfs(it,node,vis,tin,low,timer,adj);
            low[node] = min(low[it],low[node]);//there is no cycle so update low[node] from low[it]
            if(low[it] > tin[node]){
                cout<<node<<"-->"<<it<<endl;//there is a bridge
            }
        }
        else{
            low[node] = min(low[node],tin[it]);//there is a cycle and this it node is root of this cycle for this reason we update low[node] from tin[it]
        }
    }
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>tin(V,-1);//time of insertion
    vector<int>low(V,-1);//lowest insertion time among all its adjacent node
    vector<int>vis(V,0);
    int timer = 0;
    for(int i=0;i<V;i++){//check for multiple component
        if(!vis[i]){
            dfs(i,-1,vis,tin,low,timer,adj);//-1 for parent, parent of a source node is -1
        }
    }
    return 0;
}
