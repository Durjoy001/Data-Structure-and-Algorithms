//https://practice.geeksforgeeks.org/problems/minimum-swaps/1
//https://www.geeksforgeeks.org/minimum-number-of-swaps-required-to-sort-an-array-set-2/?ref=lbp

// return the minimum number of swaps required to sort the array

//The idea is to create a vector of pair in C++ with first element as array values and second element as array indices.
//The next step is to sort the vector of pair according to the first element of the pair. 
// After that traverse the vector and check if the index mapped with the value is correct or not,
//, if not then keep swapping until the element is placed correctly and keep counting the number of swaps.

//Basically first we sort the vector of pair (sort arry) then we check
//how many swap required for changing  it to it's first or initial condition. 

int minSwaps(int arr[], int N){
     vector<pair<int,int> >vec(N);
     for(int i=0;i<N;i++)
     {
         vec[i].first = arr[i];
         vec[i].second = i;
     }
     sort(vec.begin(),vec.end());
     int ans = 0;
     for(int i=0;i<N;i++)
     {
         if(vec[i].second == i)
         {
             continue;
         }
         else
         {
             swap(vec[i].first,vec[vec[i].second].first);
             swap(vec[i].second,vec[vec[i].second].second);
         }
         // swap until the correct  
        // index matches 
         if(i != vec[i].second)
         {
             i--;
         }
         ans++;
     }
     return ans;
}
