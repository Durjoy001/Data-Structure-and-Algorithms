### [Matrix chain multiplication Introduction Identification and General Format](https://www.youtube.com/watch?v=D7AFvtnDeMU&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=33)   
[GeeksforGeeks](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/)   

**Code Format of MCM:       
int solve(int arr[],int i,int j)     
{     
if(i>j){return 0;}//it may differ depending on question     
for(int k=i;k<j;k++){     
//calculate tamp answer     
tamp ans = solve(arr,i,k)+solve(arr,k+1,j);//+ or some changes may be needed in time of different problem     
ans = max(ans,tmp ans);//here max also can be changed  
}    
return ans;   
}**  
**This is general code format it can be changed slightly but format will remain same.**
