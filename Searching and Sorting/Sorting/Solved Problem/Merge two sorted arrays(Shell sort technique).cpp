https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#
time complexity:  O((n+m)*log(n+m))
https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/
https://www.youtube.com/watch?v=hVl2b3bLzBw


int nextGap(int gap)
{
    if(gap<=1){return 0;}
    if(gap%2 == 0){return (gap/2);}
    else return (gap/2)+1;
}

void merge(int arr1[], int arr2[], int n, int m) 
{ 
   int i=0,j=0,gap = n+m,tmp;
   for(gap = nextGap(gap);gap>0;gap=nextGap(gap))
   {
        // comparing elements in the first array.
        for(i=0;i+gap<n;i++)
        {
            if(arr1[i] > arr1[i+gap])
            {
                tmp = arr1[i];
                arr1[i] = arr1[i+gap];
                arr1[i+gap] = tmp;
            }
        }
        // comparing elements in both arrays.
        for(j = (gap>n ? gap-n:0); i<n && j<m;i++,j++)
        {
            if(arr1[i] > arr2[j])
            {
                tmp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = tmp;
            }
        }
        // comparing elements in the second array.
        if(j<m)
        {
            for(j=0;j+gap<m;j++)
            {
                if(arr2[j] > arr2[j+gap])
                {
                    tmp = arr2[j];
                    arr2[j] = arr2[j+gap];
                    arr2[j+gap] = tmp;
                }
            }
        }
   }
} 
