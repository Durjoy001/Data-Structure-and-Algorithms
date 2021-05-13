#### [Topological Sort (DFS)](https://www.youtube.com/watch?v=Yh6EFazXipA&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=13&t=13s)   
[GeeksforGeeks](https://www.geeksforgeeks.org/topological-sorting/)    

**Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge u->v, vertex u comes before v in that ordering.**   

**Topological Sorting for a graph is not possible if the graph is not a DAG. If the graph is not directed or graph is directed but there is a cycle then for this type of graph topological sort not possible.**    

When a DFS call of a node is over, before ending this node DFS call we will push this node in stack.   
**There can be multiple topological sort for a graph.**   

**Time Complexity: O(V+E). This algorithm is simply DFS with an extra stack. So time complexity is the same as DFS.**   
**Auxiliary space: O(V). The extra space is needed for the stack.**   

Topological Sorting is mainly used for scheduling jobs from the given dependencies among jobs.    

### [Topological Sort (BFS) | Kahn's Algorithm](https://www.youtube.com/watch?v=rZv_jHZva34&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=14)   
[GeeksforGeeks Kahn’s algorithm for Topological Sorting](https://www.geeksforgeeks.org/topological-sorting-indegree-based-solution/)   

**A Directed Acyclic Graph has at least one vertex with in-degree 0 and one vertex with out-degree 0.**    

**If count of visited nodes(size of topo sort ans vector list) is not equal to the number of nodes in the graph then the topological sort is not possible for the given graph.**   

**Time Complexity: O(V+E). The outer for loop will be executed V number of times and the inner for loop will be executed E number of times.**   
**Auxillary Space: O(V). The queue needs to store all the vertices of the graph. So the space required is O(V).**

