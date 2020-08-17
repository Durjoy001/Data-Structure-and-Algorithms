#include<bits/stdc++.h>
using namespace std;
void increment(int *p)
{
    *p = *p+1;//dereference
}
int main()
{
    int a = 10;
    increment(&a);
    //such a function call in which, instead of passing the value of a variable, we
    // pass the address of the variable, so that we have a reference to the variable
    //and we can dereference it and perform some operations is called call by reference .
    //so if we use pointers as function arguments  then we are using call by reference.
    //Call by reference can save us a lot of memory because instead of creating a copy of a large and complex
    //data-type  if we just use a reference to it and using a reference will also cost us some memory, but very small amount of memory.
    cout<<a<<endl;//output will be 11
}


#include <stdio.h> 
  
void swap(int* x, int* y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
int main() 
{ 
    int x = 10, y = 20; 
    swap(&x, &y); // x,y is local variable so in swap function if we pass the value than ,swap function's x,y will just do copy the value of main function x,y
   // and than x and y value will be interchange , and swap function will be end ,as  in swap function's x,y is also local variable so after end of swap function
   // the main function's x,y will not be changed,that's why here we passed the address or reference and change the value of that address 
    printf("%d %d\n", x, y); 
    return 0; 
} 




// C program to demonstrate that using a pointer 
// we can return multiple values. 
  
#include <math.h> 
#include <stdio.h> 
  
void fun(int n, int* square, double* sq_root) 
{ 
    *square = n * n; 
    *sq_root = sqrt(n); 
} 
  
int main() 
{ 
  
    int n = 100; 
    int sq; 
    double sq_root; 
    fun(n, &sq, &sq_root); 
  
    printf("%d %f\n", sq, sq_root); 
    return 0; 
} 

