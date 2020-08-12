#include<bits/stdc++.h>
using namespace std;
class node
{
    private:
    int data;
    class node *next;
    public:
    void create(int *,int);
    void display();
    void inserth(int);
    void del(int);
}*head,*last;
void node :: create(int *A,int n)
{
    class node *p;
    head=new class node;
    last=new class node;
    head->data=A[0];
    last=head;
    for (int i=1;i<n;i++)
    {
        p= new class node;
        p->data=A[i];
        last->next=p;
        last=p;
    }
    last->next=head;
}
void node :: display()
{
    class node *p;
    p=head->next;
    cout<<head->data<<"->";
    while(p!=head)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
}
void node :: inserth(int d)
{
    class node *p;
    p=new class node ;
    p->data=d;
    last->next=p;
    p->next=head;
    head=p;
}
void node :: del(int da)
{
    class node *p,*t;
    int l=1;
    p=head->next;
    if(head->data==da)
    {
        last->next=head->next;
        delete head;
        head=last->next;
    }
    else
    {    
        t=head;
        while(p!=head)
        {
            if(p->data==da)
            {
                t->next=p->next;
                delete p;
                p=t->next;
                l=0;
            }
            else
            {
                t=p;
                p=p->next;
            }
        }
    }
    if(l==1)
    {
        cout<<endl<<"data not in list"<<endl<<endl;
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
}
int main()
{
    class node n;
    int no=0;
    while(no!=5)
    {
        cout<<"choice"<<endl<<"1)CREATE"<<endl<<"2)DELETE"<<endl<<"3)INSERT"<<endl<<"4)DISPLAY"<<endl<<"5)EXIT"<<endl;
    cin>>no;
    switch (no)
    {
    case 1:
    cout<<endl<<"enter size"<<endl;
    int nu;
    cin>>nu;
    n.create(arr(nu),nu);
        break;
    case 2:
    cout<<endl<<"enter data to be deleted"<<endl;
    int d;
    cin>>d;
    n.del(d);
    break;
    case 3:
    cout<<"enter the data to be inserted"<<endl;
    int da;
    cin>>da;
    n.inserth(da);
    break;
    case 4:
    n.display();
    break;
    case 5:
    exit(1);
    break;
    default:
    cout<<endl<<"invalid choice "<<endl;
        break;
    }
    }
    return 0;
}
