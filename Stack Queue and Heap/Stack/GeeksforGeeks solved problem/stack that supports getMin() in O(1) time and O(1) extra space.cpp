//https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/
//practice: https://practice.geeksforgeeks.org/problems/special-stack/1

int Gmin;
void push(int a)
{
    if(s.empty())
    {
        s.push(a);
        Gmin = a;
        return;
    }
    if(a<Gmin)
    {
        s.push(2*a-Gmin);
        Gmin = a;
    }
    else
    {
       s.push(a); 
    } 
}

bool isFull(int n)
{
     if(s.size()==n)
     {
         return true;
     }
     return false;
}

bool isEmpty()
{
    if(s.empty())
    {
        return true;
    }
    return false;
}

int pop()
{
    int t = s.top();
    s.pop();
    if(t<Gmin)
    {
        return Gmin;
        Gmin = 2*Gmin - t;
    }
    return t;
}

int getMin()
{
   return Gmin;
}
