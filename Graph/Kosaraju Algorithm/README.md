#### [Kosaraju's Algorithm for Strongly Connected Components (SCC)](https://www.youtube.com/watch?v=V8qIqJxCioo&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=27)   
[GeeksforGeeks](https://www.geeksforgeeks.org/connectivity-in-a-directed-graph/)   
[GeeksforGeeks](https://www.geeksforgeeks.org/strongly-connected-components/)   

**This algo helps us to find out all the strongly connected components in a directed graph.**   

**Strongly connected component is a component in which if we start from any node we can reach every other node in that component.Every node is reachable to every other node.**   

**A single node also a strongly connected component.**  

**In this algorithm we will do dfs in reverse order. DFS start from the backend of the graph, so that only those node of strongly connected component is visited.**  

**Time Complexity : O(V+E)**   
