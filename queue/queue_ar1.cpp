#include<bits/stdc++.h>
int m=10;
using namespace std;
struct que
{
    int r;
    int *a;
};
int isFull(struct que *s)
{
    if(s->r==m-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct que *s,int x)
{
    if(!isFull(s))
    {
        s->r++;
        s->a[s->r]=x;
    }
}
int isEmpty(struct que *s)
{
    if(s->r==-1)
    {
        return 1;
    }
    else
    {    
        return 0;
    }
}
void dequeue(struct que *s)
{
    if(!isEmpty(s))
    {
        int i=0;
        while(i!=s->r)
        {
            s->a[i]=s->a[i+1];
            i++;
        }
        s->r--;
    }
}
void display(struct que *q)
{
    int i=0;
    while(i<=q->r)
    {
        cout<<q->a[i]<<" ";
        i++;
    }
    cout<<endl;
}
int main()
{
    struct que s;
    s.a =new int[m];
    s.r = -1;
    enqueue(&s,1);
    enqueue(&s,2);
    enqueue(&s,3);
    enqueue(&s,4);
    enqueue(&s,5);
    display(&s);
    dequeue(&s);
    dequeue(&s);
    dequeue(&s);
    display(&s);
    enqueue(&s,1);
    enqueue(&s,2);
    enqueue(&s,3);
    enqueue(&s,4);
    enqueue(&s,5);
    enqueue(&s,1);
    enqueue(&s,2);
    enqueue(&s,3);//queue gets full
    enqueue(&s,4);
    enqueue(&s,5);
    display(&s);
    return 0;
}
