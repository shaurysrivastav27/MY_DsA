#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class time{
public:
int h;
int m;
int s;
int ts;
};

int main()
{
class time t;
cout<<"Enter hours ?"<<endl;
cin>>t.h;
cout<<"Enter minutes ?"<<endl;
cin>>t.m;
cout<<"Enter seconds ?"<<endl;
cin>>t.s;
t.ts=(t.h*3600)+(t.m*60)+t.s;
cout<<"total time in seconds is : "<<t.ts<<endl;
return 0;
}
