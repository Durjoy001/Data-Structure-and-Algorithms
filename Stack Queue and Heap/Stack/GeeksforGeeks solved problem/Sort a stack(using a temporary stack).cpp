//https://practice.geeksforgeeks.org/problems/sort-a-stack/1
//https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/

void SortedStack :: sort()
{
   stack<int>res;
   int a;
   while(!s.empty())
   {
       a = s.top();
       s.pop();
       while(!res.empty() && res.top()>a)
       {
           s.push(res.top());
           res.pop();
       }
       res.push(a);
   }
   s = res;
}
