#### [GeeksforGeeks](https://www.geeksforgeeks.org/arrays-in-c-cpp/)    
An array in C or C++ is a collection of items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.   
They are used to store similar type of elements as in the data type must be the same for all elements.   
They can be used to store collection of primitive data types such as int, float, double, char, etc of any particular type.  
To add to it, an array in C or C++ can store derived data types such as the structures, pointers etc.   

#### Why do we need arrays?  
We can use normal variables (v1, v2, v3, ..) when we have a small number of objects, but if we want to store a large number of instances,  
it becomes difficult to manage them with normal variables. The idea of an array is to represent many instances in one variable.    

#### Advantages of an Array in C/C++:  
    * Random access of elements using array index.    
    * Use of less line of code as it creates a single array of multiple elements.    
    * Easy access to all the elements.    
    * Traversal through the array becomes easy using a single loop.    
    * Sorting becomes easy as it can be accomplished by writing less line of code.    
#### Disadvantages of an Array in C/C++:  
    * Allows a fixed number of elements to be entered which is decided at the time of declaration.  
      Unlike a linked list, an array in C is not dynamic.    
    * Insertion and deletion of elements can be costly since  
      the elements are needed to be managed in accordance with the new memory allocation.    
#### Facts about Array in C/C++:  
* Accessing Array Elements:    
    * Array elements are accessed by using an integer index. Array index starts with 0 and goes till size of array minus 1.  
* No Index Out of bound Checking:
    * There is no index out of bounds checking in C/C++, for example, program compiles fine but may produce unexpected output when run.  
    * In C, it is not compiler error to initialize an array with more elements than the specified size. For example,  
      program compiles fine and shows just Warning.   
      * Note: The program won’t compile in C++. If we save the program as a .cpp, the program generates compiler error “error: too many initializers for ‘int [2]'”.   
* The elements are stored at contiguous memory locations.  

#### Array vs Pointers  
Arrays and pointer are two different things (we can check by applying sizeof). The confusion happens because array name indicates the address of first element and arrays are always passed as pointers (even if we use square bracket).  

#### What is vector in C++?
* Vector in C++ is a class in STL that represents an array. The advantages of vector over normal arrays are,  
* We do not need pass size as an extra parameter when we declare a vector i.e,    
  Vectors support dynamic sizes (we do not have to initially specify size of a vector). We can also resize a vector.   
* Vectors have many in-built function like, removing an element, etc.   

#### Multidimensional Arrays in C / C++  
#### [geeksforgeeks](https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/)   
In C/C++, we can define multidimensional arrays in simple words as array of arrays.  
Data in multidimensional arrays are stored in tabular form (in row major order).   
General form of declaring N-dimensional arrays:  data_type  array_name[size1][size2]....[sizeN];  
Three dimensional array: int three_d[10][20][30];    
#### Size of multidimensional arrays  
Total number of elements that can be stored in a multidimensional array can be calculated by multiplying the size of all the dimensions.  
For example:  
The array int x[10][20] can store total (10*20) = 200 elements.  
Similarly array int x[5][10][20] can store total (5*10*20) = 1000 elements.  

* There are two ways in which a Two-Dimensional array can be initialized.  
    int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}  
    int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};  
    
#### Three-Dimensional Array  
 * Initializing Three-Dimensional Array: Initialization in Three-Dimensional array is same as that of Two-dimensional arrays. The difference is as the number of  
   dimension increases so the number of nested braces will also increase.  
 * int x[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 22, 23};  
 * Better Method:
   * int x[2][3][4] =   
   {   
   { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },  
   { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }  
   };    
* Accessing elements in Three-Dimensional Arrays: Accessing elements in Three-Dimensional Arrays is also similar to that of Two-Dimensional Arrays.   
  The difference is we have to use three loops instead of two loops for one additional dimension in Three-dimensional Arrays.  
  
                 



















