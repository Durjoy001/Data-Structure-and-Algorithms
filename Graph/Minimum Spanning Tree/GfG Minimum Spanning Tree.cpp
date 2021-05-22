//https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1#

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        //there has 0 to V vertices
        int key[V+1];
        int mstSet[V+1];
        int parent[V+1];
        for(int i=0;i<=V;i++){
            key[i] = INT_MAX,mstSet[i] = false,parent[i] = -1;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        
        key[0] = 0;//source
        pq.push({0,0});//value,node
        while(!pq.empty()){
            int node = pq.top().second;//for each operation in priority queue need O(logV) time complexity
            pq.pop();
            mstSet[node] = true;
            for(auto it : adj[node]){
                int adjNode = it[0];
                int adjNodeWeight = it[1];
                if(mstSet[adjNode] == false && adjNodeWeight < key[adjNode]){
                    key[adjNode] = adjNodeWeight,parent[adjNode] = node;
                    pq.push({key[adjNode],adjNode});
                }
            }
        }
        int sum = 0;
        //there has 0 to V vertices
        for(int i = 1;i<=V;i++){
            if(key[i] != INT_MAX){
               sum = sum + key[i]; 
            }
            
        }
        return sum;
    }
};
