## Introduction to Queues  
### [:boom:mycodeschool](https://www.youtube.com/watch?v=XuCbpw6Bj1U&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=23)[:boom:GeeksforGeeks](https://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/)    
**Queue is a list or collection with the restriction that insertion can be performed at one end (rear) and deletion can be performed at other end (front).**    
Queue is a  First In First Out (FIFO)  data structure.The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.  
**Operations on Queue:**  
**Enqueue:**  Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.  
**Dequeue:**  Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.   
**Front:**  Get the front item from queue.  
**Rear:**  Get the last item from queue.    

**Applications of Queue:**  
Queue is used when things don’t have to be processed immediatly, but have to be processed in First InFirst Out order like Breadth First Search. This property of Queue makes it also useful in following kind of scenarios.  
1) When a resource is shared among multiple consumers. Examples include CPU scheduling, Disk Scheduling.  
2) When data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes. Examples include IO Buffers, pipes, file IO, etc.  
