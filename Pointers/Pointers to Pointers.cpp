#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int *p;
    p = &x;
    *p = 6;
    cout<<p<<endl;//address of x
    cout<<*p<<endl;// value of p
    // now can I create a pointer for this variable P?
    // YES
    //we have to create a variable named q, that will store the address of p.NOW what will be the type of the q

    //so to store a pointer to integer, we want a pointer to pointer. so we will put two ** sign in front of a variable name
    int **q;
    q = &p; // now q can store the address of p(pointers to pointers)

    int ***r;
    r = &q; //only q is valid for r (pointers to pointers to pointers)

    cout<<*q<<endl;//output will be address of p
    cout<<**q<<endl;//output will be 6 ,value of p

    cout<<**r<<endl;//out put will be address of q
    cout<<***r<<endl;// output will be 6,value of q

    ***r = 10;
    cout<<x<<endl;//output will be 10

    **q = *p+2;
    cout<<x<<endl;//output will be 12

}
