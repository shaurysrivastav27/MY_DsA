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


//dynamic programming lecture 00
//in how many ways can we go to nth stair from 0 given we only can move {1,2,3} stairs at a time ;
//approach same as fibbonaci 
/*
1 1                                                         1
2 11,2                                                      2
3 111,12,21,3                                               4
4 1111,1122,22,2211,1212,13,31                              7
5 11111,1112,122,221,212,1211,1121,2111,113,131,311,23,32   13

*/
ll N = 1e+5;
ll mod = 1000000007;
void ini(ll *a)
{
	for(int i=0;i<N;i++) a[i] = 0;
	a[0] = 1;
	a[1] = 2;
	a[2] = 4;
}

ll solve(ll *a)
{
	ll n;
	cin>>n;
	if(a[n-1]!=0) 
	return a[n-1];
	else
	{
		for(int i=3;i<n;i++)
		a[i] = ((a[i-1])%mod+(a[i-2])%mod+(a[i-3])%mod)%mod;
	}
	return a[n-1];
	
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a[N]={0};
    ini(a);
    int t;
    cin>>t;
    while(t--)
	{
		cout<<solve(a)<<endl;
	}
    return 0;
}
