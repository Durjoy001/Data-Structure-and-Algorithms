### [Pointers and dynamic memory - stack vs heap :boom:](https://www.youtube.com/watch?v=_8-ht2AKyH4&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=13&t=764s)    
#### We can use pointers to dynamically allocate memory. The advantage of dynamically allocated memory is, it is not deleted until we explicitly delete it.   

* The memory set aside for **stack** does not grow during runtime.Application cannot request more memory. When we exhaust the   
whole space reserved for the stack, then this is called stack overflow and in this case our program will crash.   

* Heap can grow as long as we do not run out of memory on the system itself.   
#### Heap is also called dynamic memory and using the heap is referred to as dynamic memory allocation. 
( The term heap is being used only for the large free pool of memory.Heap data strcutre does not come anywhere in this context.)  
( Stack is also one data strcutre but the stack segment of the memory is actually an implementation of the stack data  
structure but heap is not an implementation of the heap data structure.)  

* To use dynamic memory in C we need to know about four functions **malloc, calloc, realloc and free.**  
* In C++ we need to know about two operators **new and delete.**  
#### [Detail explanation of dynamic memory allocation in C](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Pointers/Dynamic%20Memory%20Allocation/Pointers%20and%20dynamic%20memory%20-%20stack%20vs%20heap.c)  
#### [Detail explanation of dynamic memory allocation in C++](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Pointers/Dynamic%20Memory%20Allocation/Pointers%20and%20dynamic%20memory%20-%20stack%20vs%20heap.cpp)  

### [Dynamic memory allocation in C - malloc calloc realloc free :bomb:](https://www.youtube.com/watch?v=xDVC3wKjS64&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=13)  
 * allocate block of memory on the heap and these functions are   
   - [x] malloc -  * void (size_t size) this function as argument asks for the sizeof the memory block in bytes. size_t store onle positive integar value. this function also return void pointer that gives us the address of the first byte in allocated memory block. We reserve or allocate memory because we want to store some data there.  
        * This is void pointer so we didn't able to dereference it. To be able to use this block of memory, we first need to typecast this void pointer into a pointer of some data type.
   - [x] calloc  
   - [x] realloc  
 * deallocates a block of memory on the heap 
   - [x] free  

