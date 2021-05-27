#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,v,wt;
    node(int first,int second,int weight){
        u = first;
        v = second;
        wt = weight;
    }
};
bool comp(node a,node b){
    return a.wt < b.wt;
}
int findPar(int u,vector<int>&parent){
    if(u == parent[u]){
        return u;
    }
    return parent[u] = findPar(parent[u],parent);
}
void Union(int u,int v,vector<int>&parent,vector<int>&rank){
    u = findPar(u,parent);
    v = findPar(v,parent);
    if(rank[u] < rank[v]){
        parent[u] = v;
    }
    else if(rank[v] < rank[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        rank[u]++;
    }
}
int main()
{
    int N,m;
    cin>>N>>m;
    vector<node>edges;
    /*we are not going to store the graph in adjacent list, because the step 1 of kruskal algo says that we have
    to sort all the edges acording to the weight.For this reason we use linear data structure to store graph.*/
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }
    sort(edges.begin(),edges.end(),comp);//sort edges acording to weight
    vector<int>parent(N);
    for(int i=0;i<N;i++){
        parent[i] = i;
    }
    vector<int>rank(N,0);
    int cost = 0;
    vector<pair<int,int>>mst;//for store ans
    /*pick shortest edges from the list and we need to check these two node which are connected by this edge are in
    same component or not.We will check this in MST graph which we are try to build not in input graph.If they are belong to the same
    component then they create cycle.*/
    for(auto it : edges){
        if(findPar(it.v,parent) != findPar(it.u,parent)){
            cost += it.wt;
            mst.push_back({it.u,it.v});
            Union(it.u,it.v,parent,rank);//now they are part of the mst so combine them.
        }
    }
    cout<<cost<<endl;
    for(auto it : mst){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}
