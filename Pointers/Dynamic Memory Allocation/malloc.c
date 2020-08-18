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
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    free(A);
}

