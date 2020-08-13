#include<bits/stdc++.h>
using namespace std;
struct que 
{
    int f;
    int r;
    int *a;
    int size;
};
int isEmpty(struct que *q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isFull(struct que *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct que *q,int x)
{
    if (!isFull(q))
    {
        q->a[q->r++]=x;   
    }
}
int dequeue(struct que *q)
{
    int x=-1;
    if(!isEmpty(q))
    {
        q->f++;
        x=q->a[q->f];
    }
    return x;
}
void display(struct que *q)
{
    int i=q->f;
    while(i>=q->r)
    {
        i++;
        cout<<q->a[i]<<" ";
    }
    cout<<endl;
}
void create(struct que *q)
{
    q->f=q->r=-1;
    cout<<"size ?"<<endl;
    cin>>q->size;
    q->a=new int [q->size];
}
int main()
{
    struct que *q;
    create(q);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    display(q);
    cout<<dequeue(q)<<endl;
    display(q);
    return 0;
}
