#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define pb push_back
#define ld long double 
//#define show(a) for(ll i : a) cout<<i<<" "
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) 
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 

class qu
{
	int data;
	string str;
	qu *next;
	public:
	void pop();
	void push(int,string);
	void show();
}*head=nullptr,*last;

void qu::push(int k,string s)
{
	if(head==nullptr)
	{
		head= new qu;
		head->data = k;
		head->str = s;
		head->next = last;
		last = head;
	}
	else 
	{
		class qu *p;
		p = new qu;
		p->data = k;
		p-> str = s;
		last->next = p;
		p->next =head;
		last = p;
	}
}
void qu::show()
{
	if(head==last) cout<<head->data<<" "<<head->str<<endl;
	else
	{
		class qu *p;
		p = head;
		bool ok = true;
		while(ok)
		{
			cout<<p->data<<" "<<p->str<<endl;
			p = p->next;
			if(p==head) ok =false;
		}

	}
}
void qu::pop()
{
	if(head==nullptr) cout<<"empty already"<<endl;
	else if(head==last) 
	{
		cout<<"vlaue popped : "<<head->data<<" "<<head->str;line;
		delete head;
		delete last;
		head = new qu;
		last = new qu;
		last = nullptr;
		head = nullptr;
	}
	else 
	{
		class qu *p;
		p= head->next;
		cout<<"vlaue popped : "<<head->data<<" "<<head->str;line;
		if(p==last)
		{
			delete head;
			head = new qu;
			head= last;
		}
		else
		{
			//last->next = p;
			delete head;
			head = new qu;
			head->data = p->data;
			head->str = p->str;
			head= p;
			last->next=head;
		}
	}
}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
fastio;
	class qu q;
	q.push(1,"pop");
	q.push(2,"pop1");
	q.push(3,"pop3");
	q.show();
	q.pop();
	q.show();
	q.pop();
	q.show();
	q.pop();
	q.show();
	q.pop();
	
	//int t;cin>>t;while(t--)
    //solve();
}
