//extension fucntion to check if linked list is a loop or not//
#include<bits/stdc++.h>
using namespace std;
void loop()
{
  struct node *p,*q;  
  p=head;
  q=head;
  while(p!=q)
    {
    p=p->next;
    q=q->next;
    if(q->next!=NULL)
      {
        p=p->next;
      }
     }
  if(p->data==q->data)
      {
      cout<<"LOOP";
      }
   else cout<<"NULL";
}
