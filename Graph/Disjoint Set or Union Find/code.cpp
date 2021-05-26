#include<bits/stdc++.h>
using namespace std;
int parent[100000];
int rank[100000];
void makeSet(){
    for(int i=1;i<=n;i++){//assume there are n nodes
        parent[i] = i;//initially every node has himself as the parrent
        rank[i] = 0;
    }
}
int findPar(int node){
    if(node == parent[node]){
        return node;
    }
    //7 -> 6 -> 4 -> 3 , assume here 3 is parent node of this component and remaing all of them are it's child node
    //here for node 7 , 3 is parrent also for node 6 , 3 is parrent .same for node 4.
    //now by using this path compression node 7 directly indicate node 3 . node 6 directly indicate node 3
    return parent[node] = findPar(parrent[node]);//path compression
}
void union(int u,int v){
    u = findPar(u);//parent of u node,basically parrent of the component where u node belong
    v = findPar(v);//parent of v node,basically parrent of the component where v node belong
    
    /*lesser rank parrent node get connected to higher rank parrent node. When rank is different then no need to 
    increase the rank.When we attach two simmilar rank node then only have to increase rank by one(only
    parrent node rank will increase.)*/
    
    //The idea is to always attach smaller depth(rank) tree under the root of the deeper tree. This technique is called union by rank.
    if(rank[u] < rank[v]){
        parent[u] = v;
    }
    else if(rank[v] < rank[u]){
        parent[v] = u;
    }
    else{
        /*here we also can do this : parent[u] = v, rank[v]++;*/
        parent[v] = u;
        rank[u]++;
    }
}
int main(){
    makeSet();
    int m;
    cin>>m;
    while(m--){//m operation
        int u,v;
        cin>>u>>v;
        union(u,v);
    }
    // if two node like node 2 and node 3 belong to the same component or not
    if(findPar(2) != findPar(3)){//do not use parent array cz that will not give final parent node of the component were this 2 ,3 node belong
        cout<<"different component"<<endl;
    }else{
        cout<<"same component"<<endl;
    }
}
