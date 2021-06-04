#include<bits/stdc++.h>
using namespace std;
void swap_call_by_ref(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping"<<endl;
	cout<<a<<"\n"<<b;	
}
int main()
{
	int a,b;
	cout<<"enter the values of a and b"<<"\n";
	cin>>a>>b;
	cout<<"Before swapping"<<endl;
	cout<<a<<"\n"<<b<<endl;
	swap_call_by_ref(a,b);
	return 0;
	
}
