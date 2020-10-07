### :boom: [mycodeschool](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=12) [GeeksforGeeks](https://www.geeksforgeeks.org/binary-search-tree-set-2-delete/)   
To delete a node from tree we need to do two things, we need to remove reference of the node from its parent so the node is detached from the tree. 
And the second thing that we need to do is reclaim the memory allocated to the node being deleted. That is wipe off the node object from memory.     

When we delete a node, three possibilities arise.  
**1) Node to be deleted is leaf: Simply remove from the tree.**  
**2) Node to be deleted has only one child: link its parent to this only child.**  
**3) Node to be deleted has two children: We look for the minimum in right subtree of this node and we'll fill in that value here.**
     Now we will have a duplicate value that will be equal. Once the duplicate(minimum node of right subtree) is removed everything else will be fine. 
In a tree or subtree if a node has minimum value it won't have a left child because if they're is a left child
there is something lesser , so basically we reduce case 3 to case 2.   

So this is what we need to do in case 3, we need to find a minimum in right subtree 
of targeted node then copy or fill in this value 
and finally we need to delete the duplicate or the node with 
minimum value from right subtree.   

There was another possible approach here. Instead of going for minimum in right, 
we could also go far maximum any left subtree. if we're picking maximum in a tree or subtree then 
that node will not have right child because if we have something in right we 
have something greater.   
**Basically we reducing case 3 to case1 or case2.**  

Now the root of the left/right subtree that is the left/right child of the current node may change after deletion 
but the good thing is, the delete function will return address of the modified root of the left subtree.  

**[Here is the code of Delete operation.](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Tree/Binary%20Search%20Tree/Delete%20Operation/Delete%20a%20node%20from%20BST.cpp)**    
