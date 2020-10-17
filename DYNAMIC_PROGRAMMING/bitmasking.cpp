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

/*
problem statement 
bitmasking and subset
subset problem - print all 2^n subsets of array
s = {a,b,c}   ; {},{a},{b},{c},{a,b},{b,c},{a,c}; 2^3=8
*/

void solve()
{	
	ll n;
	cin>>n;
	vec a;
	for(int i=0;i<n;i++)
	{
		int s;
		cin>>s;
		a.pb(s);
	}
	ll N = 1<<n;
	for(int i=0;i<N;i++)
	{
		for(int j =0 ;j<n;j++)
		{
			int f = 1<<j;
			if(i&f) {
			cout<<a[j]<<" "; //printing the subset
			}
		}
		cout<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();	
	}
}
