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
int N = 2e7+5;
ll min(ll a,ll b)
{
	if(a>b) return b;
	else return a;
}
ll solve(ll n,vec table) //recursive approach tle
{
	ll a;
	if(table[n]!=-1) return table[n];
	else
	{
		a = solve(n-1,table);
		if(n%2==0)
		a = min(a,solve(n/2,table));
		else if(n%3==0)
		a = min(a,solve(n/3,table));
	}
	table[n] = a +1;
	return table[n];
}

ll solve1(ll n) //memoized approach wa
{
	if(n==1) return 0;
    vec table; 
    for (int i=0; i<=n; i++) 
        table.pb(n-i); 
    for (int i=n; i>=1; i--) 
    { 
       if (i%2==0) 
          table[i/2] = min(table[i]+1, table[i/2]); 
       if (i%3==0) 
          table[i/3] = min(table[i]+1, table[i/3]); 
    } 
    return table[1]; 
}
int main()
{
	int t;
	cin>>t;
	int k=1;
	/*vec table;
	for(int i=0;i<=N;i++)
	table.pb(-1);
	table[1] = 0;*/
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<"Case "<<k<<": "<<solve1(n)<<endl;
		k++;
	}
	return 0;
}
