#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b)
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
	cout<<"Enter the values of a and b"<<"\n";
	cin>>a>>b;
	swap(a,b);
	return 0;
}
