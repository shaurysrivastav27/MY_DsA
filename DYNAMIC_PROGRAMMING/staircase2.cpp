#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define vec vector<ll>
#define sort(a) sort(a.begin(),a.end())
#define sort1(a) sort(a.begin(),a.end(),greater<ll> ())
#define vec1 vector<vector<ll>>
#define pb push_back
/*
staircase problem with recursive approach 
*/
ll N = 1e6 + 5;

void ini(ll *table)
{
	for(int i=0;i<=N;i++)
	table[i] = 0;
	table[0] = 0;
	table[1] = 1;
	table[2] = 2;
}

ll solve(ll n,ll *table)
{
	if(table[n] !=0) return table[n];
	else 
	{
		table[n] = solve(n-1,table) + solve(n-2,table);
		return table[n];
	}
}


int main()
{
	int t;
	cin>>t;
	ll table[N+1];
	ini(table);
	while(t--)
	{
		 ll n;
		 cin>>n;
		 ll ans = solve(n,table);
		 cout<<ans<<endl;
	}
	return 0;
}
