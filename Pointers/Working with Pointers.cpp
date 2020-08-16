#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 8;
    int *p;
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    *p = 12; //dereferencing
    cout<<*p<<endl;
    int b = 2010;
    *p = b; //will the address in p change to points b? ANS: NO; its just change the value
    cout<<*p<<endl;

    //can we really increment and decrement a pointer variable? YES
    cout<<p<<endl; //out put .....2002
    cout<<p+1<<endl;// output ....2006
    // if p address is 2002 than p+1 address will be 2006  this is because if p is an integer pointer
    // increamenting it by one unit takes us to the address of the next integer (int size of an int is 4 byte)
    // plus one increments p by 4 bytes ,thats why p+1 is 2006
    cout<<sizeof(int)<<endl;
    cout<<*(p+1)<<endl;// what will be out put?
    // ans: garbage value because we do not have an integer allocated to this memory address
}
