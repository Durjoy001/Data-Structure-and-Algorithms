#include<bits/stdc++.h>
using namespace std;
void increment(int *p)
{
    *p = *p+1;//dereference
}
int main()
{
    int a = 10;
    increment(&a);
    //such a function call in which, instead of passing the value of a variable, we
    // pass the address of the variable, so that we have a reference to the variable
    //and we can dereference it and perform some operations is called call by reference .
    //so if we use pointers as function arguments  then we are using call by reference.
    //Call by reference can save us a lot of memory because instead of creating a copy of a large and complex
    //data-type  if we just use a reference to it and using a reference will also cost us some memory, but very small amount of memory.
    cout<<a<<endl;
}
