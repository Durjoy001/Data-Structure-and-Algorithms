#include<bits/stdc++.h>
using namespace std;
void findTopoSort(int node,vector<int>&vis,stack<int>&s,vector<vector<pair<int,int>> >adj){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it.first]){
            findTopoSort(it.first,vis,s,adj);
        }
    }
    s.push(node);
}
/*When we use a bfs, we are not sure which is the starting point, hence it might happen we have to iterate in the queue many times, when we use topo sort,
we are sure this is the first node which has no incoming nodes. Hence we start from the starting point, hence taking lesser amount of time. */

//While using BFS, you are not sure if your source is the starting point or not, if it is not, then you will be taking extra turns.
void shortestPath(int source,int V, vector<vector<pair<int,int>> >adj){
    vector<int>vis(V,0);
    stack<int>s;
    //find Topo Sort
    //topological sort ensures that we are picking up nodes which comes first while travelling 
    //the node which has less incoming node will encounter first
    for(int i=0;i<V;i++){
        if(!vis[i]){
            findTopoSort(i,vis,s,adj);
        }
    }
    // when we use topo sort, we are sure that this is the first node which has no incoming nodes
    vector<int>distance(V);
    for(int i=0;i<V;i++){
        distance[i] = INT_MAX;
    }
    distance[source] = 0;//source to source distance is 0
    while(!s.empty()){
        int node = s.top();
        s.pop();
        //This if condition is useful in case of disconnected graph
        //if we dont use it then it will also calculate the distance for unreachable nodes(disconnected node)
      //also if the graph has one component but there maybe some node which are not possible to visit from source node cz it is directed graph .that's why we use this conditon
        if(distance[node] != INT_MAX){//if the node has been reached previously
            for(auto it : adj[node]){
                if(distance[node]+it.second < distance[it.first]){
                    distance[it.first] = distance[node]+it.second;
                }
            }
        }
    }
    for(int i=0;i<V;i++){
        if(distance[i] == INT_MAX){
            cout<<"INF"<<endl;//for disconnected node from source
        }else{
            cout<<distance[i]<<" ";
        }
    }
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector< vector < pair <int,int> > >adj(V);
    for(int i=0;i<E;i++){
        int u,v,wt;
        cin>> u>> v>> wt;
        adj[u].push_back({v, wt});
    }
    shortestPath(0,V,adj);
}
