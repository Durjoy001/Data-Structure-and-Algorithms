//https://www.youtube.com/watch?v=okr-XE8yTO8&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=23
//https://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/

#include<bits/stdc++.h>
using namespace std;
#define max_size 101
class Queue
{
public:
    int A[max_size];
    int Front,Rear;
    // We are assuming that for an empty Queue, both front and rear will be -1.
    Queue()
    {
        Front = -1;
        Rear = -1;
    }
    bool isEmpty()
    {
        return (Front==-1 && Rear == -1);
    }
    bool isFull()
    {
        return (Rear+1)%max_size == Front  ? true:false;
    }
    void Enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Error: Queue is Full\n";
			return;
        }
        else if(isEmpty())
        {
            Rear = Front = 0;
        }
        else
        {
            Rear = (Rear+1)%max_size;
        }
        A[Rear] = x;
    }
    void Dequeue()
    {
        if(isEmpty())
	{
	     cout<<"Error: Queue is Empty\n";
	     return;
	}
	else if(Front == Rear)
        {
            Front = Rear = -1;
        }
        else
        {
            Front = (Front+1)%max_size;
        }
    }
    /*int Front()
	{
		if(Front == -1)
		{
			cout<<"Error: cannot return front from empty queue\n";
			return -1;
		}
		return A[Front];
	}*/
	void Print()
	{
	   //number of element in queue
	  int count = (Rear+max_size-Front)% max_size + 1;
	for(int i=0;i<count;i++)
        {
            int index = (i+Front)% max_size;
            cout<<A[index]<<" ";
        }
        cout<<endl;
	}
};
int main()
{
    Queue Q;
   Q.Enqueue(2);  Q.Print();
   Q.Enqueue(4);  Q.Print();
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();
}
