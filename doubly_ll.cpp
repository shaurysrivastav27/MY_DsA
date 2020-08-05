#include<bits/stdc++.h>
using namespace std;
struct node 
{
    struct node *next;
    struct node *prev;
    int data;
}*head;
void create(int *a,int n)
{
    struct node *p,*last;
    head=new struct node;
    head->data=a[0];
    head->next=NULL;
    head->prev=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        p=new struct node;
        p->data=a[i];
        p->next=last->next;
        p->prev=last;
        last->next=p;
        last=p;
    }
}
void display()
{
    struct node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
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
void search(int d)
{
    int l=0;
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        if(p->data==d)
        {
            cout<<"element present "<<endl;
            l=1;
            break;
        }
        else
        {
            p=p->next;
        }
    }    
    if(l==0)
    {
        cout<<"element not found"<<endl;
    }
}
void insert(int s,int po)
{
    struct node *p,*t;
    p=new struct node;
    p->data=s;
    t=head;
    if(po==1)
    {
        p->next=head;
        p->prev=NULL;
        head=p;
    }
    else
    {
        if(po<=count())
        {
            int i=0;
            while(i<po-2)
            {
                i++;
                t=t->next;
            }
            p->next=t->next;
            p->prev=t;
            t->next=p;
        }
    }
    
}
void del(int pos)
{
    struct node *p,*q;
    p=head;
    if(pos==1)
    {
        p=head->next;
        p->prev=NULL;
        delete head;
        head=p;
    }
    else
    {
        if(pos<=count())
        {
            p=head;
            int i=0;
            while(i<pos-1)
            {
                q=p;
                p=p->next;
                i++;
            }
            q->next=p->next;
            delete p;
            p=q->next;
        }
    }
    
}
int * arr(int n)
{
    int *a;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;
    delete []a;
}
int main()
{
    int k=0;
    while(k!=5)
    {
        cout<<"1)CREATE"<<endl<<"2)DELETE"<<endl<<"3)INSERT"<<endl<<"4)SEARCH"<<endl<<"5)EXIT"<<endl;
    cin>>k;
    switch (k)
    {
    case 1:
    cout<<endl<<"enter size of linked list"<<endl;
    int n;
    cin>>n;
    create(arr(n),n);
        display();
        break;
    case 2:
    cout<<endl<<"enter the position to be deleted "<<endl;
    int pos;
    cin>>pos;
    del(pos);
    display();
        break;
        case 3:
        cout<<endl<<"enter element and pos to be inserted"<<endl;
        int po,d;
        cin>>d>>po;
        insert(d,po);
        display();
        break;
        case 4:
        cout<<endl<<"enter element for search"<<endl;
        int de;
        cin>>de;
        search(de);
        break;

    default:
    cout<<endl<<"invalid choice"<<endl;
        break;
    }
    }
    return 0;
}
