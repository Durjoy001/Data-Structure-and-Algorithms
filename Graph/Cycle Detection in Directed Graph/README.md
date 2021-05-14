#### [Cycle Detection in Directed Graph using DFS](https://www.youtube.com/watch?v=uzVUw90ZFIg&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=12)   
[GeeksforGeeks](https://www.geeksforgeeks.org/detect-cycle-in-a-graph/)     

**We want to check if a node is visited again from same DFS call or not, that's why when a DFS call of a node is over and if we didn't find any cycle for this node
DFS call we will mark this unvisited in dfsVis array. So that when a different DFS call call execute and if it will find this particular node again then it will not 
detect there is a cycle cz though it is again visited but from different DFS call.** 
 
 **When a node is visited again from same DFS call or current traversal then there is a cycle.**  
 
 **dfsVis array keeping track if the nodes are visited from current traversal or same DFS call or not.**    
 
 **When this current movement or DFS call of a node is over and we didn't find any cycle then we will mark this as unvisited.**  
 
 **When a particular node DFS call is not over and we again visit this node then there is a cycle.**
 
 **Time Complexity: O(V+E). Time Complexity of this method is same as time complexity of DFS traversal which is O(V+E).**   
 **Space Complexity: O(V). To store the visited and recursion stack O(V) space is needed.**
 
 ### [Cycle Detection in Directed Graph using BFS(Kahn's Algorithm)](https://www.youtube.com/watch?v=V6GxfKDyLBM&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=15)    
 
 Topological sort is only possible in Directed Acyclic Graph and Kahn's algorithm is used to find topological sort by using BFS in Directed Acyclic graph.   
 
 **Topological sort is not possible in cyclic graph so if we unable to generate full topological sort for given graph then there is a cycle.**  
