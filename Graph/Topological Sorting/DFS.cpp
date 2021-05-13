//https://practice.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
	public:
	void findTopoSort(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
	    vis[node] = 1;
	    for(auto it : adj[node]){
	        if(!vis[it]){
	            findTopoSort(it,vis,st,adj);
	        }
	    }
	    //When a DFS call of a node is over, before ending this node DFS call we 
	    //will push this node in stack.
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V,0);
	    stack<int>st;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            findTopoSort(i,vis,st,adj);
	        }
	    }
	    vector<int>res;
	    while(!st.empty()){
	        res.push_back(st.top());
	        st.pop();
	    }
	    return res;
	}
};
