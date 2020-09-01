#include<bits/stdc++.h>
using namespace std;
long long *a;
long long mat(long long n)//mathematic formula O(1)
{
    long double p= pow((1+pow(5,0.5))/2,n);
    long double q= pow((1-pow(5,0.5))/2,n); 
    long double r= (pow(5,0.5));
    long double f= (p-q)/r;
    long long a = f;
    return a;
}
void create()//dynamic problem approach o(n)
{
    a=new long long [150];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<150;i++)
    {
        a[i]=-1;
    }
}
long long int fib(long long n)
{
    if(a[n]==-1)
    a[n]=fib(n-1)+fib(n-2);
    return a[n];
}
int main()
{
    create();
    long long n;
    cin>>n;
    cout<<fib(n-1)<<" "<<mat(n);
    return 0;
}
