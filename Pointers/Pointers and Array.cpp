#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[] = {2,4,5,8,1};

    int *p = A;
    cout<<p<<endl;//address of 1st element
    cout<<*p<<endl;//value of 1st element
    cout<<(p+1)<<endl;//address of second element
    cout<<*(p+1)<<endl;//value of second element

    cout<<A<<endl;//address of the 1st element in the array
    cout<<&A[0]<<endl;//address of the 1st element in the array

    cout<<A[0]<<endl;//value in the first element in the array
    cout<<*A<<endl;//value in the first element in the array

    for(int i=0;i<5;i++)
    {
        cout<<&A[i]<<endl;//address of this element in the array
        cout<<(A+i)<<endl;//address of this element in the array

        cout<<A[i]<<endl;//value in this element in the array
        cout<<*(A+i)<<endl;//value in this element in the array
    }
}

