### [Introduction to graphs](https://www.youtube.com/watch?v=gXgEDyodOJU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=38)       
A Graph is a non-linear data structure consisting of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that
connect any two nodes in the graph. Tree is a special kind of graph.   
**A Graph consists of a finite set of vertices(or nodes) and set of Edges which connect a pair of nodes.**   
  
**A Graph G is an ordered pair of a set V of vertices (node) and a set E of edges.**   
**G = ( V , E )**    

Edge are two types directed and undirected. Directed edge can be traverse only in the way of direction and Undirected edges can be traverse in both direction.
It is possible for a graph to have both directed and undirected edges.      

A graph with all directed edges
is called a **directed graph** or digraph and a graph with all undirected ages is called an **undirected graph**.   

Directed graph or digraph in which edges are uni-directional or ordered pairs and
undirected graph in which edges are bi-directional or unordered pairs.      

**Also a graph can be weighted or unweighted.**       

**Graphs are used to represent many real-life applications: Graphs are used to represent networks.Graphs are also used in social networks like linkedIn, Facebook.**  

#### [GeeksforGeeks](https://www.geeksforgeeks.org/graph-and-its-representations/)    

### [Properties of Graphs](https://www.youtube.com/watch?v=AfYqN3fGapc&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=39)    
* An edge is called a **self loop or self edge** if it involves only 1 vertex. (same node as origin as well as destination).
If both endpoint of an edge are same then it's called a self loop. We can have a self loop in both directed and
undirected graphs.    

* An edge is called a **multi-edge** if it occurs more than once in a graph.(Between two nodes
there are two or more edge which are directed in same direction like
node A to node B) Once again, we can have a multi-edge in both directed and undirected graphs.

* **Set of edges can be empty, nodes can be totally disconnected(this will still be a graph), minimum possible number of edges in a graph is zero.**   

* **In general if there are N vertices : | V | = N**   
**Then maximum number of edges in a directed graph would be N * (N - 1).**   
**In a simple directed graph number of edges would be in this range 0 to N * (N-1); 0 <= | E | <= N * (N -1).**    

* **If the graph is simple and undirected number of edges would be in the range 0 to (N * (N - 1) ) / 2; 0 <= | E | <= (N * (N -1) ) / 2.**    

* **This is true only if the graph is simple there is no self loop or multi-edge.(Above two equation).**  

* A graph is called dense if number of edges in the graph is close to maximum
possible number of edges.(too many edges)   

* A graph is called sparse if the number of edges is really less
typically close to a number of vertices and not more than that.(too few edge)   

* A path in a graph is a sequence of vertices where each adjacent
pair in the sequence is connected by an edge.   

* **A path is called simple path if no vertices are repeated(when traversing the path we will not turn back in a node which we already traverse) and if vertices are not repeated then edges will also not be repeated.**     

* **A graph is called strongly connected if in the graph there is a path from any vertex to any other vertex(we can go any node to any node). If it's an undirected graphs, we simply call it connected and if it's a directed graph, we call it strongly connected.**    

* If a directed graph is not
strongly connected but can be turned into connected graph
by treating all edges as undirected
then such a directed graph is called **weakly connected**.     

* **A cycle in a graph is starting and ending in same node with no repation of node and edges.**  

* **A graph with no cycle is called an acyclic graph.** A tree if drawn with undirected edges would be an example of and undirected acyclic graphs.**Tree is acyclic graph.**   

[**Graph Representation part 01 - Edge List**](https://www.youtube.com/watch?v=ZdY1Fp9dKzs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=40&t=1s)

[**Graph Representation part 02 - Adjacency Matrix**](https://www.youtube.com/watch?v=9C2cpQZVRBA&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=41)     

[**Graph Representation part 03 - Adjacency List**](https://www.youtube.com/watch?v=k1wraWzqtvQ&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=42)   







