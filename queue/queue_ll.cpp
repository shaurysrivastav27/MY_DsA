#include<bits/stdc++.h>
using namespace std;
int m = 10;
struct node
{
    struct node *next;
    int data;
}*head;
int count()
{
    int l=0;
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        p=p->next;
        l++;
    }
    return l;
}
int isEmpty()
{
    if(count()==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isFull()
{
    if(count()==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void enqueue(int x)
{
    if(!isFull())
    {
    if(count()==0)
    {
        head =new struct node;
        head->data =x;
        head->next =NULL;
    }
    else
    {
        struct node *p,*q;
        p =  new struct node;
        p->data =x;
        q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        p->next=NULL;
    }
    }
}
void dequeue()
{
    if(!isEmpty())
    {
    if(count()==1)
    {
        delete head;
        head=NULL;
    }
    else
    {
        struct node *p;
        p= head->next;
        delete head;
        head=p;
    }
    }
}
void display()
{
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    struct node n;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();
    enqueue(100);
    display();
    dequeue();
    dequeue();
    return 0;
}
