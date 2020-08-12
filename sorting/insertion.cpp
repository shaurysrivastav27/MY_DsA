#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int *a;
  a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=1;i<n;i++)
  {
    int j=i-1;
    int temp=a[i];
    while(temp<a[i] && j>=0)
    {
      a[i+1] = a[i];
      j--;
     }
     a[j+1] = temp;
  }
  display(a);
  return 0;
}
