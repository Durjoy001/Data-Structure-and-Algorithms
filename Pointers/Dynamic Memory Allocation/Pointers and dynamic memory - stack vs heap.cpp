#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;//this variable is a local variable. It goes on the stack.
          //Memory for this particular variable a  will
          //be allocated from the stack frame of the main method.

/* Let us say we want to store an integer on the heap.To reserve, or get some space
allocated on the heap, we need to call the new function*/

/* The new function asks for how much memory to allocate on the heap in bytes. */

   int *p;
   p = new int;// So one block of 4 bytes will be reserved or allocated on the heap
   //new will return a pointer to starting address of this block.
   //And, new returns a void pointer.

   /* Now, we have a pointer to integer p, which is a local variable to main.
    So, this will be allocated in the stack frame of the main method.*/

    *p = 10;//set the value 10 in that particular heap address.
    cout<<*p<<endl;
    delete p;
    p = new int;//one more call to new.
    *p = 20;
    //one more block of 4 bytes is allocated on the heap.
    //P now points to second heap address
    // The previous block will still sit in the heap.
    // This memory we are still consuming, it will not be cleared off automatically.
    /*if we are done using some block of memory which is dynamically allocated using
     new , we also need to clear it, because it is unnecessary consumption */
    /*So we should clear this memory*/
    //memory which is allocated using new , is cleared off by calling delete.
    //And to delete, we pass the pointer to the starting address of the memory block.
   delete p;
   p = new int[20];//want to store an array of 20 elements.
   p[0]//1st element
   p[1]//second or
   *p//1st
   *(p+1)//second element

   /*if malloc is not able to find any free block of memory, is not able to allocate some memory on the
    heap, it returns null.*/
   delete[] p;

}
