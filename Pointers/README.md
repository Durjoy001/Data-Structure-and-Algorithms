### [Introduction to pointers in C/C++  ](https://www.youtube.com/watch?v=h-HBipu_1P0&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=2&t=0s)    
can we know the address of a variable in our program? Or can we operate upon these memory addresses in our program?    
yes, you can do so in a C or C++ program, using the concept of pointers.       
### Pointers are variables that store the address of another variable.   
     int a=4;  
     int *p;   (pointer to int) (We need an integer pointer variable to store the address of an integer)    
     p = &a;   (Now, this variable 'p' can store the address of 'a') 
     print p;  (output will be the address of 'a' )    
               (Every time when we run the program address will be different than the previous address,   
                because every time the program runs afresh,a new address is allocated)       
     print &a; (also give the address of 'a')  
     print &p; (give address of 'P' )  
     print *p; (it gives us the value at the location that it points to ,basically it's gives the value of 'a')  
     (This concept is called as de-referencing)  
     we can modify the value at this particular location, by   
     *p = 8;   (the value at 'p' is now modified to 8 means the value of 'a' becomes 8)     
       
So if we try to print a pointer variable without asterisk ( * ) sign, or operate upon it without asterisk ( * ) sign, we are operating with the address.  
While if we put the asterisk ( * ) sign in front of the pointer variable, and operate upon it then we are operating the value at that address.   
### [Pointers to Pointers](https://www.youtube.com/watch?v=d3kd5KbGB48&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=4)   
 * why pointer variables are strongly typed? why do we need a pointer to integer to reference or store the address of an integer?  
   * ANS: it is because we don't just store the address of a variable in a pointer variable we also use the pointer variable to dereference the address &
     write some value there.(modifie and get the value in that address)  
 * void pointer (void* p) its only able to store the address of integer vaiable or any other type of variabe but its not store the value of that address ,means we can't get value if we use this type of pointer.
     
     
     

