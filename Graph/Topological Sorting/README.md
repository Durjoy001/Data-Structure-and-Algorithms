#### [Topological Sort (DFS)](https://www.youtube.com/watch?v=Yh6EFazXipA&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=13&t=13s)   
[GeeksforGeeks](https://www.geeksforgeeks.org/topological-sorting/)    

**Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge u->v, vertex u comes before v in that ordering.**   

**Topological Sorting for a graph is not possible if the graph is not a DAG. If the graph is not directed or graph is directed but there is a cycle then for this type of graph topological sort not possible.**    

When a DFS call of a node is over, before ending this node DFS call we will push this node in stack.   
**There can be multiple topological sort for a graph.**   

**Time Complexity: O(V+E). This algorithm is simply DFS with an extra stack. So time complexity is the same as DFS.**   
**Auxiliary space: O(V). The extra space is needed for the stack.**   

Topological Sorting is mainly used for scheduling jobs from the given dependencies among jobs.
