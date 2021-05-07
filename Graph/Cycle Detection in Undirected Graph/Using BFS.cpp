#include<bits/stdc++.h>
using namespace std;
bool isCycle(int start_Node,vector<int>&vis,vector< vector<int> >adj){
    queue< pair<int,int> >q;//in pair first element is node and second element is it's parent node
    q.push({start_Node,-1});//starting node(of this specific component) has no parent node so here we push -1
    vis[start_Node] = 1;
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(int i=0;i<adj[node].size();i++){
            if(!vis[adj[node][i]]){
                vis[adj[node][i]] = 1;
                q.push({adj[node][i],node});
            }
            //we store parent node cz parent node is alway visited because we came from it
            else if(parent != adj[node][i]){//it means that adjacent node is already visited and it's not parent node
            //of this current node, so there is a cycle.
                return true;
            }
        }
    }
    return false;
}
bool cycle(int V,vector< vector<int> >adj){
    vector<int>vis(V+1,0);
    for(int i = 1;i <= V;i++){//we assume that graph has multiple component
        if(!vis[i]){
        //In any of the component if there is a cycle that means the graph has a cycle
            if(isCycle(i,vis,adj)){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector<vector<int> >adj(V+1);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans = cycle(V,adj);
    if(ans == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
