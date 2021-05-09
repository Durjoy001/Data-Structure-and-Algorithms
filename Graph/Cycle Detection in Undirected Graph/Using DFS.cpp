//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution 
{
    public:
    bool cycle(int start_node,int parent,vector<int>&visited,vector<int>adj[]){
        visited[start_node] = 1;
        for(auto it : adj[start_node]){
            if(!visited[it]){
                if(cycle(it,start_node,visited,adj)){
                    return true;
                }
            }
            else if(it != parent){//already visited but this is not parent node of this current node so there is a cycle
                return true;
            }
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int>visited(V,0);
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            if(cycle(i,-1,visited,adj)){//there is no parent node of this starting so we pass -1 
	                return true;
	            }
	        }
	    }
	    return false;
	}
};
