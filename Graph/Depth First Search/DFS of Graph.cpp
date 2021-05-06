//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

class Solution 
{
    public:
	void dfs(int node,vector<int>&ans,vector<int>&vis,vector<int>adj[]){
	    ans.push_back(node);
	    vis[node] = 1;
	    for(auto it : adj[node]){
	        if(!vis[it]){
	            dfs(it,ans,vis,adj);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>ans;
	    vector<int>vis(V+1,0);
	    dfs(0,ans,vis,adj);//source node is 0
	    return ans;
	}
};
