#### [Disjoint Set | Union By Rank and Path Compression](https://www.youtube.com/watch?v=3gbO7FDYNFQ&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=24)  

**Assume there are multiple components in a graph and from random two node we have to find if they are belong to the same component or not. That is where this 
disjoint set or union find data structure is used to tell us if a particular node and the other node belong to the same component or the different component.**  

This data structure provide us two different operation :   

* **findPar()  // find parrent going to give us the parrent of a component. findPar(5) will give parrent of this component where node 5 belongs to.**     
* **Union()  // Union(1,5) It means which ever component node 1 belongs to and which ever component node 5 belongs to just combine this two different components 
into a single component.**   

**Time Complexity for each operation : O(4 * alpha) which is equivalent to O(4) , almost constant time operation.**
