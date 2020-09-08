//https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        q2.push(x);
        while(! q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        //swap the name of twe queue
        queue<int>q;
        q = q1;
        q1 = q2;
        q2 = q;
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        if(q1.empty())
        {
            return -1;
        }
        int x = q1.front();
        q1.pop();
        return x;
        
}
