//array application
#include<bits/stdc++.h>
using namespace std;
struct stac
{
int top;
int *a;
int size;
};
void create(struct stac *st)
{
    cout<<"enter size"<<endl;
    cin>>st->size;
    st->top=-1;
    st->a=new int[st->size];
}
int isEmpty(struct stac *st)
{
    int x=0;
    if(st->top==-1)
    {
        x=1;
    }
    return x;
}
int isFull(struct stac *st)
{
    int x=0;
    if(st->top==st->size-1)
    {
        x=1;
    }
    return x;
}

void push(struct stac *st,int d)
{
    if(isFull(st))
    {
        cout<<endl<<"Stackoverflow"<<endl;
    }
    else
    {
        st->top++;
        st->a[st->top]=d;
    }
}
int pop(struct stac *st)
{
    int x=-1;
    if(isEmpty(st))
    {
        cout<<"stackunderflow"<<endl;
    }
    else
    {
        x=st->a[st->top];
        st->top--;
    }
return x;
}
void display(struct stac *st)
{
    for(int i=st->top;i>=0;i--)
    {
        cout<<st->a[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    struct stac st;
    create(&st);
    push(&st,1);
    push(&st,2);
    display(&st);
    cout<<"empty status "<<isEmpty(&st)<<endl;
    cout<<"full status "<<isFull(&st)<<endl;
    cout<<"pop:"<<pop(&st)<<endl;
    cout<<"pop:"<<pop(&st)<<endl;
    cout<<"empty status "<<isEmpty(&st)<<endl;
    cout<<"full status "<<isFull(&st)<<endl;
    return 0;
}
