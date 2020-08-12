#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int l,int m,int r)
{
    int *b,*c;
    int n1 = m-l+1;
    int n2 = r-m;
    b = new int[n1];
    c = new int[n2];
    for (int i = 0; i < n1; i++)
    {
        b[i]=a[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[i]=a[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k]=c[j];
        j++;
        k++;
    }
}
void merges(int *a,int l,int r)
{
    if(l<r)
    {
    int m = ((r-l)/2) + l;
    merges(a,l,m);
    merges(a,m+1,r);
    merge(a,l,m,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int *a;
    a=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merges(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;   
}
