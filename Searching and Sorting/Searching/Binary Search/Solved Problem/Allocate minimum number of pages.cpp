//https://www.geeksforgeeks.org/allocate-minimum-number-pages/
//https://www.youtube.com/watch?v=2JSQIhPcHQg

//Strategy : Binary Search on Answer.If array is unsorted than also we can use this strategy.
bool isValid(int *arr,int n,int m,int mid)
{
    int student = 1;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        // check if current number of pages are greater 
        // than mid that means we will get the result 
        // after mid no. of pages 
        if(arr[i]>mid)
        {
            return false;
        }
        sum = sum + arr[i];
        if(sum > mid)
        {
            student++;
            sum = arr[i];
        }
        if(student > m)
        {
            return false;
        }
    }
    //there maybe a case when student would be less than m;
    //but we have to return true,cz it is possible to divide this much of page 
    //or less than this to every students.
    //logic is if less number of student can read this much of page
    //then it obious that more number of students also can read this much
    //or less than this much of page.
    return true;
}
int findPages(int *arr, int n, int m) {
    int sum = 0;
    int MX = 0;
    //array maybe sorted or unsorted but we can't sort the array 
    //if array is unsorted then also we can use this binary search stratagy
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
        MX = max(arr[i],MX);
    }
    if(m > n)//student is more than number of books
    {
        return -1;
    }
    int low = MX;//minimum possible value
    int high = sum;//maximum possible value
    int mid;
    int result = -1;
    while(low <= high)
    {
        mid = low + (high - low)/2;
        if(isValid(arr,n,m,mid) == true)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}
