#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size of an array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));//dynamically allocated array
    //malloc function return void pointer that's why we type cast it to pointer to integer.
    //pointer A points the first address of heap memory.
    for(int i=0;i<n;i++)
    {
        A[i] = i+1;
    }
    int *B = (int*)realloc(A,2*n*sizeof(int));//increase size
    for(int i=0;i<2*n;i++)
    {
        printf("%d ",B[i]);
    }
    //output 1 2 3 4 5 3229510 -872415028 47128 8206008 8195384
    //we didn't set value in last 5 elements 
    int *B = (int*)realloc(A,(n/2)*sizeof(int));//decrease size
    // last half allocated address of A will be deallocated
    int *B = (int*)realloc(A,0);//complete block of A will be deallocated it is equivalent to free(A)
    
    int *B = (int*)realloc(NULL,n*sizeof(int));//equivalent to malloc create a new block 
    
    /* So realloc can be used with the right
      arguments as substitute for free as well as substitute for malloc.*/
    free(A);
}

