#### [Dijkstra's Algorithm | Shortest Path in Undirected Graphs](https://www.youtube.com/watch?v=jbhuqIASjoM&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=18)   
[GeeksforGeeks](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)   
[GeeksforGeeks](https://www.geeksforgeeks.org/dijkstras-algorithm-for-adjacency-list-representation-greedy-algo-8/)   

* The code calculates shortest distance, but doesn’t calculate the path information. We can create a parent array, update the parent array when distance is updated and use it show the shortest path from source to different vertices.    

* **The code is for undirected graph, same dijkstra function can be used for directed graphs also.**     
 
* The code finds shortest distances from source to all vertices. If we are interested only in shortest distance from the source to a single target, we can break the for loop when the picked minimum distance vertex is equal to target.    

* Dijkstra’s algorithm doesn’t work for graphs with negative weight edges. For graphs with negative weight edges, Bellman–Ford algorithm can be used.       

**Dijkstra's algorithm helps us to find the shortest distance/path from source to every other node.**   

**Time Complexity : O( (E+V) LogV ) , LogV time is needed for min heap/priority queue each operation.**   
