//https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x-using-recursion/

#include<bits/stdc++.h>
using namespace std;
// Recursive function to return the count of subsets with sum equal to the given value
int subSetSum(int arr[],int n,int i,int sum,int count)
{
    // The recursion is stopped at N-th level where all the subsets of the given array have been checked
    if(i == n){
        // Incrementing the count if sum is equal to 0 and returning the count
        if(sum == 0){
            count++;
        }
        return count;
    }
    // Recursively calling the function for two cases Either the element can be counted in the subset
    // If the element is counted, then the remaining sum to be checked is sum - the selected element
    // If the element is not included, then the remaining sum to be checked is the total sum
    count = subSetSum(arr,n,i+1,sum,count);
    count = subSetSum(arr,n,i+1,sum-arr[i],count);
    return count;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<subSetSum(arr, n, 0, sum, 0);
}
