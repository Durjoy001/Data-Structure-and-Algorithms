//https://practice.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>indegree(V,0);
	    queue<int>q;
	    for(int i=0;i<V;i++){//compute in-degree of each node
	        for(auto it : adj[i]){
	            indegree[it]++;
	        }
	    }
	    //enqueue all vertices with indegree 0
	    for(int i=0;i<V;i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    vector<int>ans;
	    //A Directed Acyclic Graph has at least one vertex with in-degree 0 
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);//the in-degree of that node is 0 so push it in our ans
	        // Iterate through all of its neighbouring nodes and decrease their in-degree by 1 cz we pop out their parent node 
	        for(auto it : adj[node]){
	            indegree[it]--;
	            if(indegree[it] == 0){//if in-degree becames 0 then push this node into queue
	                //when indegree of a node becomes 0 then it have to push ans list
	                q.push(it);
	            }
	        }
	    }
	    return ans;
	}
