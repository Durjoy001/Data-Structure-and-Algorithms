//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
//https://www.youtube.com/watch?v=kvyShbFVaY8&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=3

int knapSack(int W, int wt[], int val[], int n) 
{ 
    //Base Case
    if(W==0 || n==0){
        return 0;
    }
    //If weight of the nth item is more than Knapsack capacity W, then
    // this item cannot be included in the optimal solution
    if(wt[n-1] > W){
        return knapSack(W,wt,val,n-1);
    }
    // Return the maximum of two cases: (1) nth item included
    //(2) not included
    else{
        return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),
        knapSack(W,wt,val,n-1));
    }
}
