//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#

class Solution 
{
    public:
    bool cycle(int start_node,vector<int>&visited,vector<int>adj[]){
        queue<pair<int,int> >q;
        q.push({start_node,-1});
        visited[start_node] = 1;
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(int i = 0;i<adj[node].size();i++){
                if(!visited[adj[node][i]]){
                    q.push({adj[node][i],node});
                    visited[adj[node][i]] = 1;
                }
                else if(parent != adj[node][i]){
                    return true;
                }
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
	            if(cycle(i,visited,adj)){
	                return true;
	            }
	        }
	    }
	    return false;
	}
};
