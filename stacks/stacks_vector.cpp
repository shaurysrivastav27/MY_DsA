#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> stack;
    int k=-1;
	cout<<"1)push"<<endl<<"2)display"<<endl<<"3)count"<<endl<<"4)delete"<<endl<<"5)exit"<<endl;
	while(k!=5)
	{
        cin>>k;
        switch(k)
        {
            case 1:
            cout<<"enter data"<<endl;
                int t;
                cin>>t;
                stack.push_back(t);
                break;
            case 2:
                cout<<"Elements are: ";
                for(auto element:stack)
                    cout<<element<<" ";
                cout<<endl;
                break;
            case 3:
                cout<<"Number of Elements are : "<<stack.size()<<endl;
                break;
            case 4:
                stack.pop_back();
                break;
            case 5:
                exit;
        }
	}
	return 0;
}
