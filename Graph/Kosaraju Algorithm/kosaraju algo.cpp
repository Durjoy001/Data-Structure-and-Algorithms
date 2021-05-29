#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,vis,st,adj);
        }
    }
    st.push(node);
}
void revDFS(int node , vector<int>&vis,vector<int>transpose[]){
    cout<<node<<" ";
    vis[node] = 1;
    for(auto it : transpose[node]){
        if(!vis[it]){
            revDFS(it,vis,transpose);
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
    }
    stack<int>st;
    vector<int>vis(V,0);
    //sort all the node in order of finishing time(Topological sort).
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }
    //Graph is not directed Acyclic(may contain cycle) so we can't get actual topo sort node order.For that reason we transpose the graph.
    //transpose the graph so that we don't end up by going to the other Componnet.
    //Reverse all directed edge direction.all the edge get reverse.
    vector<int>transpose[V];
    for(int i=0;i<V;i++){
        vis[i] = 0;
        for(auto it : adj[i]){
            transpose[it].push_back(i);
        }
    }
    //DFS acording to the finishing time on transpose graph.
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(!vis[node]){
            cout<<"Strongly Connected Componnet is:"<<endl;
            revDFS(node,vis,transpose);
            cout<<endl;
        }
    }
}
