#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    cin>>V>>E;
    vector<vector<pair<int,int> > >adj(V);
    for(int i=0;i<E;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    int parrent[V];
    bool mstSet[V];
    int key[V];
    for(int i=0;i<V;i++){
        key[i] = INT_MAX,mstSet[i] = false,parrent[i] = -1;
    }
    priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;//MIN HEAP
    key[0] = 0;//0 is source node
    pq.push({0,0});//{value,node}
    // Run the loop till all the nodes have been visited
    // because in the brute code we checked for mstSet[node] == false while computing the minimum
    // but here we simply take the minimal from the priority queue, so a lot of times a node might be taken twice
    // hence its better to keep running till all the nodes have been taken.(run loop until the queue is empty)
    while(!pq.empty()){
        int u = pq.top().second;//find node which has minimum key value
        pq.pop();
        mstSet[u] = true;
        for(auto it : adj[u]){
            int v = it.first;
            int weight = it.second;
            if(mstSet[v] == false && key[v]>weight){
                parrent[v] = u,key[v] = weight;
                pq.push({key[v],v});
            }
        }
    }
    for(int i=1;i<V;i++){
        cout<<parrent[i]<<" - "<<i<<endl;
    }
    
}
