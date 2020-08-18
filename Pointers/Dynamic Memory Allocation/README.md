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
   - [x] **malloc -  void * malloc(size_t size)** this function as argument asks for the sizeof the memory block in bytes. size_t store onle positive integar value like unsigned integer. this function also return void pointer that gives us the address of the first byte in allocated memory block. We reserve or allocate memory because we want to store some data there.  
        * **This is void pointer so we didn't able to dereference it. To be able to use this block of memory(store value and modifie value), we first need to typecast this void pointer into a pointer of some data type.**
   - [x] **calloc - void * calloc(size_t num,size_t size)**  calloc does the same stuff as malloc it is only slightly different. calloc also returns a void pointer but calloc takes 2 argument.number of elements of a particular data type and the second argument is the size of this data type.
        *  When malloc allocates some amount of memory, it **does not initialize** the bytes with any value, so if we do not fill in any value into these addresses allocated by malloc, we would have some garbage there. But if we allocate memory through calloc, calloc sets all byte positions with value zero. So, it also **initializes the memory** that it allocates to zero.
   - [x] **realloc  - void * realloc (void * ptr,size_t size)** If we have a block of dynamically allocated memory and if you want to change the size of this block of memory, then we can use realloc.This function takes two arguments. The first argument is pointer to the starting address of the existing block and the second argument is the size of the new block.  there can be a case hear,The size of the new block that we want may be larger than the size of the previous block. In that case, machine may create an entirely new block and copy the previous data whatever bytes that was written in previous block into the new block and previous block will be deallocated automatically. If contiguous or consecutive memory is already available with the existing block than existing block will be extend otherwise it's create new one.If the size of the new block that we want is smaller than the size of the previous block than remaining extra space will be automatically deallocated.
 * deallocates a block of memory on the heap 
   - [x] **free**  - Any memory that is dynamically allocated remains allocated till the lifetime of the program, till the time the program is executing unless we explicitly de-allocate it and to de-allocate memory we have function free or delete.In Free function we just pass the starting address of memory block as argument.
   like free(A).Here A is pointer to integer which we have to declare for points to heap.  
   
#### code of these 4 function:    
   [**malloc**](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Pointers/Dynamic%20Memory%20Allocation/malloc.c)   
   [**calloc**](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Pointers/Dynamic%20Memory%20Allocation/calloc.c)    
   [**realloc**](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Pointers/Dynamic%20Memory%20Allocation/realloc.c)    


