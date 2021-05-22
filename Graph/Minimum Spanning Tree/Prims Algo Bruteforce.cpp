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
    key[0] = 0;//0 is source node, source to source distace is 0
    //Final MST have V-1 edges that's why we run the loop 0< V-1
    for(int count = 0;count<V-1;count++){
        int mini = INT_MAX,u;
        //find minimum key value from key array which is not part of mstSet array
        //in key array index is node and value is weight  of this corresponding node,here we will find minimum weighted node
        for(int v = 0;v<V;v++){
            if(mstSet[v] == false && key[v]<mini){
                mini = key[v],u = v;
            }
        }
        //u node is minimum weighted node so now put it in MST
        mstSet[u] = true;
        //update all it's adjacent node
        for(auto it : adj[u]){
            int v = it.first;
            int weight = it.second;
            if(mstSet[v] == false && key[v]>weight){
                parrent[v] = u,key[v] = weight;
            }
        }
    }
    for(int i=1;i<V;i++){
        cout<<parrent[i]<<" - "<<i<<endl;
    }
    
}
