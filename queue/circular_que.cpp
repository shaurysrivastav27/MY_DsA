#include<bits/stdc++.h>
using namespace std;
class que
{
    public:
    int *a;
    int t;
    int b;
    int size;
    int isEmpty();
    int isFull();
    void create();
    void enqueue(int x);
    void dequeue();
    void display();
};
void que :: create()
{
    t=b=-1;
    cout<<endl<<"size ?"<<endl;
    cin>>size;
    a = new int[size+1];
}
int que ::isFull()
{
    if(b+1==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int que :: isEmpty()
{
    if(b==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void que :: enqueue(int x)
{
    if(isEmpty())
    {
        a[(b+2)%size]=x;
        t++;
        t=t%size;
    }
    else if(!isFull())
    {
        b++;
        b=b%size;
        a[b]=x;
    }
}
void que :: dequeue()
{
    if(!isEmpty())
    {
        t++;
        t=t%size;
        int x = t;
        cout<<a[x]<<endl;
    }
}
void que :: display()
{
    int i=t+1;
    while(i!=t)
    {
        cout<<a[i]<<" ";
        i++;
        i=(i)%size;
    }
    cout<<endl;
}
int main()
{
    class que q;
    q.create();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.enqueue(4);
    q.display();
}
