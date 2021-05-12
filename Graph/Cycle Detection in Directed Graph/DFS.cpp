//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

class Solution
{
    public:
	bool checkCycle(int node,vector<int>&vis,vector<int>&dfsVis,vector<int>adj[]){
	    vis[node] = 1;
	    dfsVis[node] = 1;
	    for(auto it : adj[node]){
	        if(!vis[it]){
	            if(checkCycle(it,vis,dfsVis,adj)){
	                return true;
	            }
	        }
	        else if(dfsVis[it] == 1){//node is visited again from same root DFS call
	            return true;
	        }
	    }
	    dfsVis[node] = 0;//we want to check if a node is visited again for same DFS call or not.
	    //That's why when a DFS call of a node is over and we didn't find any cycle from this node DFS call 
	    //we will mark this unvisited.
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<int>vis(V,0);
	   	vector<int>dfsVis(V,0);
	   	//dsfVis array keep track if the nodes are visited again from same DFS call or not
	   	for(int i=0;i<V;i++){
	   	    if(!vis[i]){
	   	        if(checkCycle(i,vis,dfsVis,adj)){
	   	            return true;
	   	        }
	   	    }
	   	}
	   	return false;
	}
