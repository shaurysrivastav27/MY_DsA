#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector ll>>
#define arr array<ll,1000000> 
#define str string
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
#define sort(a) sort(a.begin(),a.end())
#define sort1(a) sort(a.begin(),a.end(),greater<ll> ())
#define show(a) for(ll i:a) cout<<i<<" ";

using namespace std;


void solve1() //time limit exceeded
{
	ll n; cin>>n;
	vec a;
	for(int i=0;i<n;i++)
	{
		ll s;
		cin>>s;
		a.pb(s);
	}
	sort(a);
	ll k = n-1;
	bool flag = false;
	int N = 1<<n;
		for(int i=0;i<N;i++)
		{
			ll sum=0;
			ll sumq = 0;
			for(int j=0;j<n;j++)
			{
				ll f = 1<<j;
				if(f&i) 
				{	
					sumq = sumq + a[j];
				}
				else
				sum =sum+a[j];
			}
			if(sum == sumq)
			{	
				flag = true;
				cout<<"YES"<<endl;
				break;
			}
		}
		if(flag == false) cout<<"NO"<<endl;
}

void solve()
{
	ll n; cin>>n;
	vec a;
	for(int i=0;i<n;i++)
	{
		ll s;
		cin>>s;
		a.pb(s);
	}
	sort(a);
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
