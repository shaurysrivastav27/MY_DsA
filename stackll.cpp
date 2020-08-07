//stacks using linked list
#include<bits/stdc++.h>
using namespace std;
int m=5;
class sta
{
    private:
        int data;
        class sta *next;
    public:
        void create(int );
        int count();
        void display();
        void del();
}*head;
int sta:: count()
{
    class sta *p;
    p=head;
    int l=0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}
void sta :: del()
{
    if(count()==0)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {    
    class sta *p,*q;
    p=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    delete p;
    }
}
void sta:: display()
{
    class sta *p;
    p=head;
    int l=0;
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
}
void  sta:: create(int d)
{
    if(count()==m)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
    class sta *p,*q;
    if(count()==0)
    {
        head = new class sta;
        head->data=d;
        head->next=NULL;
    }
    else
    {
        p=head;
        q=new class sta;
        int i=count()-1;
        while(i--)
        {
            p=p->next;
        }
        q->data=d;
        p->next=q;
        q->next=NULL;
    }
    }
} 
int main()
{
	class sta n;
	int k=-1;
	while(k!=5)
	{
	cout<<"1)push"<<endl<<"2)display"<<endl<<"3)count"<<endl<<"4)delete"<<endl<<"5)exit"<<endl;
	cin>>k;
	switch(k)
	{
		case 1:
		cout<<"enter data"<<endl;
		int t;
        cin>>t;
		n.create(t);
		break;
        break;
		case 2:
		n.display();
		break;
        case 3:
        cout<<n.count()<<endl;
        break;
        case 4:
        n.del();
        break;
        case 5:
		exit(1);
		break;
		default:
		cout<<"invalid :"<<endl;
		break;
	}
	}
	return 0;
}
