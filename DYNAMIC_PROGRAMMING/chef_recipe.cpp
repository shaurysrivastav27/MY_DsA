/*
Chef has N dishes, numbered 1 through N. For each valid i, dish i is described by a string Di containing only lowercase vowels, i.e. characters 'a', 'e', 'i', 'o', 'u'.

A meal consists of exactly two dishes. Preparing a meal from dishes i and j (i≠j) means concatenating the strings Di and Dj in an arbitrary order into a string M describing the meal. Chef likes this meal if the string M contains each lowercase vowel at least once.

Now, Chef is wondering - what is the total number of (unordered) pairs of dishes such that he likes the meal prepared from these dishes?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
N lines follow. For each valid i, the i-th of these lines contains a single string Di.
Output
For each test case, print a single line containing one integer - the number of ways to prepare a meal Chef likes.

Constraints
1≤T≤1,000
1≤N≤10^5
1≤|Di|≤1,000 for each valid i
the sum of all |D_i| over all test cases does not exceed 3⋅10^7
*/

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

void solve1() //tle at last case
{
	int n;
	cin>>n;
	int a[n][5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int sq=0;
		for(int j=0;j<s.size();j++)
		{
			if(s[j] == 'a')      a[i][0] = 1;
			else if(s[j] == 'e') a[i][1] = 1;
			else if(s[j] == 'i') a[i][2] = 1;
			else if(s[j] == 'o') a[i][3] = 1;
			else if(s[j] == 'u') a[i][4] = 1;
			else if(a[i][0]*a[i][1]*a[i][2]*a[i][3]*a[i][4]) break;
		}
	}
	int c =0 ;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int count = 0;
			for(int k=0;k<5;k++)
			{
				int ans = a[i][k]+a[j][k];
				if(ans>0) count++;
			}
			if(count==5) c++;
		}
	}
	cout<<c<<endl;
}

void solve ()
{
	int n;
	cin>>n;
	int a[n][5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int sq=0;
		for(int j=0;j<s.size();j++)
		{
			if(s[j] == 'a')      a[i][0] = 1;
			else if(s[j] == 'e') a[i][1] = 1;
			else if(s[j] == 'i') a[i][2] = 1;
			else if(s[j] == 'o') a[i][3] = 1;
			else if(s[j] == 'u') a[i][4] = 1;
			else if(a[i][0]*a[i][1]*a[i][2]*a[i][3]*a[i][4]) break;
		}
	}
	vec b;
	for(int i=0;i<n;i++)
	{
		int temp=0,k=5;
		temp = 16*a[i][4] + 8*a[i][3] + 4*a[i][2] + 2*a[i][1] + a[i][0];
		b.pb(temp);
	}
	int c=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int e = b[i]|b[j];
			if(e == 31)
			c++;	
		}
	}
	cout<<c<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ini();
    int t;
    cin>>t;
    while(t--)
	{
		solve();
	}
    return 0;
}
