#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int parent,vector<int>&vis,vector<int>&tin,vector<int>&low,int &timer,vector<int> adj[],vector<int>&isArticulation){
    vis[node] = 1;
    tin[node] = low[node] = timer++;
    int child = 0;
    for(auto it : adj[node]){
        if(it == parent){
            continue;
        }
        if(!vis[it]){
            dfs(it,node,vis,tin,low,timer,adj,isArticulation);
            low[node] = min(low[node],low[it]);
            if(low[it] >= tin[node] && parent != -1){//parent != -1 , for source or start node of a component cz it can't be a articulation point.
                isArticulation[node] = 1;//A node might come up in articulation point multiple time when compearing it with different node
            }
            child++;//if a dfs is called for it's adjacent node then those are definitly individual childern(not connected by each other)
        }
        else{
            low[node] = min(low[node],tin[it]);
        }
    }
    if(parent == -1 && child>1){//if start or source node has multiple individual child and they are not connected by each other then satrt node can become articulation point.
        isArticulation[node] = 1;
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
    vector<int>isArticulation(V,0);//ans array
    int timer = 0;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i,-1,vis,tin,low,timer,adj,isArticulation); //-1 for parent of this sorce node
        }
    }
    for(int i=0;i<V;i++){
        if(isArticulation[i] == 1){
            cout<<i<<endl;
        }
    }
    return 0;
}
