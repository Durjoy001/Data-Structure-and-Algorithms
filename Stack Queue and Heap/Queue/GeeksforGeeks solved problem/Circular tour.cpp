//https://practice.geeksforgeeks.org/problems/circular-tour/1

int tour(petrolPump p[],int n)
{
    int start = 0,end = 1;
    int Cpetrol = p[start].petrol-p[start].distance;
    while(start != end || Cpetrol<0)
    {
        while(Cpetrol<0 && start!= end)
        {
            
            Cpetrol -= p[start].petrol-p[start].distance;
            start = (start+1)%n;
            if(start==0)
            {
                return -1;
            }
        }
        Cpetrol = Cpetrol+p[end].petrol-p[end].distance;
        end = (end+1)%n;
    }
    return start;
}
