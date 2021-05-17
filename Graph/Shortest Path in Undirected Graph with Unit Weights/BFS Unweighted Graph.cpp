#include<bits/stdc++.h>
using namespace std;
void BFS(int source,vector<int>&distance,vector<vector<int>>&adj){
    queue<int>q;
    q.push(source);
    distance[source] = 0;//source to source distance is 0
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(distance[node]+1 < distance[it]){
                //if adjacent node has INT_MAX value then the distance will be parent node distance +1 
                distance[it] = distance[node]+1;
                q.push(it);
            }
        }
    }
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector<vector<int>>adj(V);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>distance(V);
    //distance array will store each node shortest distance from source node
    for(int i=0;i<V;i++){
        distance[i] = INT_MAX;
    }
    //here source node is 0
    BFS(0,distance,adj);
    for(int i = 0;i<V;i++){
        cout<<distance[i]<<" ";
    }
}
