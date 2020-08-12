#include<bits/stdc++.h>
using namespace std;
class node 
{
    class node *next;
    class node *prev;
    int data;
    public:
        void create(int *,int);
        void display();
        void count();
        void del(int );
        void insert(int , int );
}*head,*last;
void node::  create(int *a,int n)
{
    head= new class node;
    head->data =a[0];
    last=head;
    class node *p;
    for(int i=1;i<n;i++)
    {
        p=new class node;
        p->data=a[i];
        last->next=p;
        p->prev=last;
        last=p;
    }
    last->next=head;
    head->prev=last;
}
void node :: display()
{
    cout<<endl;
    class node *p;
    cout<<head->data<<"->";
    p=head->next;;
    while(p!=head)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
}
int * arr(int n)
{
    int *a ;
    a=new int [n];
    int i=0;
    while(n--)
    {
        cin>>a[i];
        i++;
    }
    return a;
    delete []a;
}
int main()
{
    class node no;
    int n;
    cin>>n;
    no.create(arr(n),n);
    no.display();
}
