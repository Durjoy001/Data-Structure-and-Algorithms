https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#
https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/
Time Complexity: O(n*m)

void merge(int arr1[], int arr2[], int n, int m) 
{ 
   int tmp;
   for(int i=0;i<n;i++)
   {
       if(arr1[i] > arr2[0])
       {
           tmp = arr1[i];
           arr1[i] = arr2[0];
           arr2[0] = tmp;
            int first = arr2[0];
            int j;
            for(j=1;j<m && arr2[j]<first;j++)
            {
                arr2[j-1] = arr2[j]; 
            }
            arr2[j-1] = first;
       }
   }
} 
