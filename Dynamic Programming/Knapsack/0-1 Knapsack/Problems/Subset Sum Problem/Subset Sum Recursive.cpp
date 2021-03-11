//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

#include<bits/stdc++.h>
using namespace std;
// Returns true if there is a subset of arr[] with sum equal to given sum
bool isSubSet(int arr[],int n,int sum)
{
    // Base Cases
    if(sum == 0){
        return true;
    }
    if(n == 0){
        return false;
    }
    // If last element is greater than sum, then ignore it
    if(arr[n-1]>sum){
        return isSubSet(arr,n-1,sum);
    }
    /* else, check if sum can be obtained by any of the following:
    (a) including the last element
    (b) excluding the last element */
    else{
        // Here we use OR || operator because this will return true value if one
        //of the function return false and other one return true. 
        // our main target is if one of this function call return true then pass this
        // T || F = T , F || T = T, T || T = T , F || F = F
         return isSubSet(arr,n-1,sum-arr[n-1]) || isSubSet(arr,n-1,sum);
    }
}
int main()
{
    int arr[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isSubSet(arr,n,sum)){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}
