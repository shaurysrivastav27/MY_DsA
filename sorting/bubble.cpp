#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* code */
    int n;
    cin>>n;
    int *a;
    a= new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                int t = a[j-1]; //replacing temperory var;
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}
