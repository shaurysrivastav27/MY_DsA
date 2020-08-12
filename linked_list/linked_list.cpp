//linked list using class //all operations 
#include<bits/stdc++.h>
using namespace std;
class node
{
	private:
		int data;
		class node *next;
	public:
		void display();		//display function 
		void create(int *a,int n); 	//create function
		int count();	//counting the nodes
		void insert1(int d);	//inserting at front 
		void insertp(int pos,int d); //inserting at given position
		void inserte(int d);		//insert at end
		void inserts(int dq);	//insert in sorted position 
		void del(int pos1);	// delete at given position
		void dup_remove();	//delete the duplicate elements 
		void rev_el();	// reversing using elements transfer
		void rev_rl();	//reversing using sliding links
		void rev_re(node *p, node *q);  //reversing using recursion
}*head;
void node::rev_rl()
{
class node *p,*q,*r;
p=head;
q=NULL;
r=NULL;
while(p!=NULL)
{
	r=q;
	q=p;
	p=p->next;
	q->next=r;
}
head=q;
}
void node::rev_el()
{
	class node *p;
	int *a;
	p=head;
	a=new int[count()];
	int l=count();
	while(p!=NULL)
	{
		a[l-1]=p->data;
		p=p->next;
		l--;
	}
	p=head;
	int i=0;
	head->data=a[i];
	while(i!=count()-1)
	{
		i++;
		p=p->next;
		p->data=a[i];
	}
	delete []a;
}
void node:: del(int pos1)
{
	if(count()<pos1-1 || count()==0)
	{
		cout<<"invalid"<<endl;
	}
	else
	{
		int i=0;
		class node *p,*q;
		p=head;
		q=NULL;
		if(pos1==1)
		{
			head=p->next;
			delete p;
		}
		else{
		while(i!=pos1-1)
		{
			i++;
			q=p;
			p=p->next;
		}
		q->next=p->next;
		delete p;
	}
	}
	
}
void node::dup_remove()
{
	class node *p,*q;
	p=head;
	q=head->next;
	while(q!=NULL)
	{
		if(q->data!=p->data)
		{
			p=q;
			q=q->next;
		}	
		else
		{
			p->next=q->next;
			delete q;
			q=p->next;
		}
		
	}
}
void node:: create(int *a,int n)
{
	class node *p,*last;
	head=new class node;
	head->data=a[0];
	head->next=NULL;
	last=head;
	for(int i=1;i<n;i++)
	{
		p=new class node;
		p->data=a[i];
		p->next=NULL;
		last->next=p;
		last=p;
	}
}
void node::display()
{
	class node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		p=p->next;
	}
	cout<<endl;
}
void node::insert1(int d)
{
	class node *t;
	t=new class node;
	t->data=d;
	t->next=head;
	head=t;
}
int node:: count()
{
	int l=0;
	class node *p=head;
	while(p!=NULL)
	{
		l++;
		p=p->next;	
		if(l>5)
		{
			break;
		}
	}
	return l;
}
void node:: insertp(int d,int pos)
{
	if(count()<pos)
	{
		cout<<"list out of index:"<<endl;
	}
	else
	{
	class node *t,*p;
	t=new class node;
	t->data=d;
	p=head;
	int i=0;
	while(i!=pos-2)
	{
		p=p->next;
		i++;
	}
	t->next=p->next;
	p->next=t;
	}	
}
void node:: inserts(int dq)
{
	class node *p,*t,*q;
	t=new class node;
	t->data=dq;
	t->next=NULL;
	p=head;
	q=NULL;
	if(dq<=head->data)
	{
		t->next=head;
		head=t;
	}
	else
	{
	while(p!=NULL && p->data<dq)
	{
		q=p;
		p=p->next;
	}
	t->next=p;
	q->next=t;
	}
}
void node:: inserte(int d)
{
	class node *t,*p;
	t=new class node;
	t->data=d;
	if(count()==0)
	{
		t->next=NULL;
		head=t;
	}
	else{
	p=head;
	int i=0;
	while(i!=count()-1)
	{
		p=p->next;
		i++;
	}	
	p->next=t;
	t->next=NULL;
	}
}
void node:: rev_re(class node *q,class node *p)
{
	if(p!=NULL)
	{
		rev_re(p,p->next);
		p->next=q;
	}
	else
	{
	head=q;
	}
}
int* arr(int n)
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
	int k=0,N,t;
	while(k!=11)
	{
	cout<<"1)create"<<endl<<"2)display"<<endl<<"3)insert at head"<<endl<<"4)insert at pos"<<endl<<"5)count of nodes"<<endl<<"6)insert at end"<<endl<<"7)insert sort"<<endl<<"8)delete"<<endl<<"9)reverse"<<endl<<"10)remove duplicates"<<endl<<"11)exit"<<endl;
	cin>>k;
	switch(k)
	{
		case 1:
		cout<<"enter number of elements in list"<<endl;
		cin>>N;
		n.create(arr(N),N);
		break;
		case 2:
		n.display();
		break;
		case 3:
		cout<<"enter the d"<<endl;
		int a;
		cin>>a;
		n.insert1(a);
		break;
		case 4:
		cout<<"d and pos"<<endl;
		int d, pos;
		cin>>d>>pos;
		n.insertp(d,pos);
		break;
		case 5:
		cout<<n.count()<<endl;
		break;
		case 6:
		cout<<"enter d";
		cin>>t;
		n.inserte(t);
		break;
		case 7:
		int dq;
		cin>>dq;
		n.inserts(dq);
		break;
		case 8:
		int pl;
		cout<<"enter pos"<<endl;
		cin>>pl;
		n.del(pl);
		break;
		case 9:
		cout<<endl<<"reversing"<<endl<< "1)using element transfer"<<endl<<"2)using sliding links"<<endl<<"3)using recursion"<<endl;
		int ch;
		cin>>ch;
		switch (ch)
		{
		case 1:
			n.rev_el();
			break;
		case 2:
			n.rev_rl();
			break;
		case 3:
		n.rev_re(NULL,head);
		break;
		default:
			break;
		}
		break;
		case 10:
		n.dup_remove();
		break;
		case 11:
		exit(1);
		break;
		default:
		cout<<"invalid choice :"<<endl;
		break;
	}
	}
	return 0;
}
