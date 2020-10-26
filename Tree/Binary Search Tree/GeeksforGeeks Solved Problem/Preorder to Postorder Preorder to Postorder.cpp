//https://practice.geeksforgeeks.org/problems/preorder-to-postorder/0#

#include <bits/stdc++.h>
using namespace std;
void printPostOrder(vector<int>arr,int n,int low,int high,int* index)
{
    if(*index >= n)
    {
        return;
    }
    if(arr[*index] < low || arr[*index] > high)
    {
        return;
    }
    int root = arr[*index];
    *index = *index +1;
    printPostOrder(arr,n,low,root,index);
    printPostOrder(arr,n,root,high,index);
    cout<<root<<" ";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int index = 0;
	    printPostOrder(arr,n,INT_MIN,INT_MAX,&index);
	    cout<<endl;
	}
	return 0;
}
