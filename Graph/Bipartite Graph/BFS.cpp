//https://practice.geeksforgeeks.org/problems/bipartite-graph/1

class Solution {
public:
    bool bipartiteBFS(int src,int colour[],vector<int>adj[]){
        queue<int>q;
        q.push(src);
        colour[src] = 1;//set the source node colour as 1
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(colour[it] == -1){//means node is unvisited and uncoloured
                    q.push(it);
                    //adjacent node should have exactly oposite colour
                    colour[it] = 1-colour[node];//coloured this node as oposite colour of parent node
                }
                else if(colour[it] == colour[node]){//if adjacent node have same colour then the graph is not bipartite
                    return false;
                }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    int colour[V];//we have two colour 0 and 1, initially set all node colour as -1
	    memset(colour,-1,sizeof(colour));
	    for(int i=0;i<V;i++){
	        if(colour[i] == -1){//-1 means node don't have any coloured also unvisited
	            if(!bipartiteBFS(i,colour,adj)){
	            //If any of the component is not bipartite then the entire graph is not bipartite
	                return false;
	            }
	        }
	    }
	    return true;
	}

};
