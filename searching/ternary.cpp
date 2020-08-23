#include<bits/stdc++.h>
using namespace std;
int t_search(int l,int r,int *a,int key)
{
    int m1 = l + (r-l)/3;
    int m2 = r - (r-l)/3;
    if(l<=r)
    {
        if(a[m1]==key)
        {
            return m1;
        }
        if(a[m2]==key)
        {
            return m2;
        }
        if(a[m1]>key)
        {
            return t_search(l,m1-1,a,key); 
        }
        if(a[m2]<key)
        {
            return t_search(m2+1,r,a,key);
        }
        else
        {
            return t_search(m1+1,m2-1,a,key);
        }
    }
    return -1;
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout<<t_search(0,4,a,3)<<endl;
    cout<<t_search(0,4,a,6);
    return 0;
}
