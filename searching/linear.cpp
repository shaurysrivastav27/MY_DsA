#include<bits/stdc++.h>
using namespace std;
int search(int key,int *a)
{
  for(int i=0;i<a.size();i++)
  {
    if(a[i] == key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
int a[] = {1,2,3,4,5};
cout<<search(4,a);
cout<<search(6,a);
return 0;\
}
