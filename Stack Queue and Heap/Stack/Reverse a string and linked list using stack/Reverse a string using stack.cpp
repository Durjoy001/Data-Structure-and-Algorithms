//https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/
//time complexity O(n)
//space complexity O(n)

#include<bits/stdc++.h>
using namespace std;
void Reverse(string str)
{
    int l = str.size();
    stack<char>s;//create stack from stl library
    //loop for push
    for(int i=0;i<l;i++)
    {
        s.push(str[i]);
    }
    //loop for pop
    for(int i=0;i<l;i++)
    {
        str[i] = s.top();
        s.pop();
    }
    cout<<str<<endl;
}
int main()
{
    string s;
    cin>>s;
    Reverse(s);
}
