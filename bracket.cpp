#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vec vector<ll> 
#define pair pair<ll,ll>
#define set set<ll>

string check_bracket(string s,int n)
{
	vector<char> a;
	int  j =0;
	for(int i=0;i<n;i++)
        {
        	if(a.size()==0)
        	if(s[i] == '}' || s[i] ==']' || s[i] == ')')
        	return "not Balanced";
            else if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                a.push_back(s[i]);
            }
            else if(int(a[a.size()-1])+2==int(s[i]))
            {   
                    a.pop_back();
            }
            else if( int(a[a.size()-1])+1==int(s[i]))
            {
                a.pop_back();
            }
            else
            {
                a.push_back(s[i]);
            }
            
        }
	if(a.size()==0)
	return "Balanced";
	else
	return "Not balanced";
}
int main()
{
	int n;
	string a;
	cin>>a;
	n = a.size();
	cout<<check_bracket(a,n);
	return 0;
}
