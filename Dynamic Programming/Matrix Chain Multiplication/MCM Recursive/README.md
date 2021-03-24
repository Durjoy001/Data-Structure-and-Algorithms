### [Matrix Chain Multiplication Recursive](https://www.youtube.com/watch?v=kMK148J9qEE&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=34)  
[GeeksforGeeks](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/)   

**For matrix multiplication if there are two matrix a and b, then for multiplying them there have to same number of colum in first matrix and same number of row in second
matrix.**   

**If first matrix dimension is a x b and second matrix dimension is c x d , then if b==c then we will able to multiply them else we can't. And result matrix dimension 
will be a x d. And cost of this multiplication will be { a * (b or c value) * d } [as b and c are same].**      

**Cost = Number of multiplication.**   

arr[] = {40, 20, 30, 10, 30} 0 indexed   
Number of matrix = arr.size()-1;      

Dimension:   
A1 = 40 x 20   
A2 = 20 x 30   
A3 = 30 x 10    
A4 = 10 x 30   

**Ai = arr[i-1] x arr[i]**   
