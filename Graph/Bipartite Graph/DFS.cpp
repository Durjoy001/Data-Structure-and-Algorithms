//https://practice.geeksforgeeks.org/problems/bipartite-graph/1#

class Solution{
public:
    bool bipartiteDFS(int node,vector<int>&colour,vector<int>adj[]){
        if(colour[node] == -1){//for source node of each component in the graph
            colour[node] = 1;
        }
        for(auto it : adj[node]){
            if(colour[it] == -1){
                colour[it] = 1-colour[node];
                if(!bipartiteDFS(it,colour,adj)){
                    return false;
                }
            }
            else if(colour[it] == colour[node]){
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>colour(V);
	    for(int i=0;i<V;i++){
	        colour[i] = -1;
	    }
	    for(int i=0;i<V;i++){
	        if(colour[i] == -1){
	            if(!bipartiteDFS(i,colour,adj)){
	                return false;
	            }
	        }
	    }
	    return true;
	}

};
