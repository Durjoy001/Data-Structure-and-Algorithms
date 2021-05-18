#### [Shortest Path in Weighted Directed Acyclic Graph](https://www.youtube.com/watch?v=CrxG4WJotgg&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=17)   
[GeeksforGeeks](https://www.geeksforgeeks.org/shortest-path-for-directed-acyclic-graphs/)   

Time Complexity: Time complexity of topological sorting is O(V+E). After finding topological order, the algorithm process all vertices and for every vertex, it runs a loop for all adjacent vertices. Total adjacent vertices in a graph is O(E). So the inner loop runs O(V+E) times. Therefore, overall time complexity of this algorithm is O(V+E).
