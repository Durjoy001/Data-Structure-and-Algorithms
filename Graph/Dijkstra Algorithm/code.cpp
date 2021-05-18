#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    cin>>V>>E;
    vector< vector < pair <int,int> > >adj(V+1);// 1-indexed adjacency list for of graph
    for(int i=0;i<E;i++){
        int u,v,wt;
        cin>> u>> v>> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    int source = 1;
    //we can use queue instead of priority_queue but it will end up taking a lot more time, 
    //as we will not get the shorter distance at first instance, will have to do a lot of rounds.
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;// min-heap ; In pair => (distance,from)
	vector<int> distance(V+1,INT_MAX); 	// 1-indexed array for calculating shortest paths;
	distance[source] = 0;//source to source distance is 0
	pq.push({0,source});//(distance,from)
	while(!pq.empty()){
	    int prevNode = pq.top().second;
	    int prevDist = pq.top().first;
	    pq.pop();
	    for(auto it : adj[prevNode]){
	        int node = it.first;//adjacency node
	        int nodeWeight = it.second;//adjacency node weight
	        if(distance[node] > nodeWeight+prevDist){//instead using of prevDist ,we can also use distance[prevNode].
	            distance[node] = nodeWeight+prevDist;//prevDist == distance[prevNode]
	            pq.push({distance[node],node});
	        }
	    }
	}
	for(int i=1;i<=V;i++){
	    cout<<distance[i]<<" ";
	}
}
