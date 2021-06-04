#include<bits/stdc++.h>
using namespace std;
int great(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		cout<<"greater number= "<<a;
	}
	else if(b>a&&b>c)
	{
		cout<<"greater number= "<<b;
	}
	else
	{
		cout<<"greater number= "<<c;
	}
}
int main()
{
	int a,b,c;
	int large;
	cout<<"enter the numbers a,b,c"<<"\n";
	cin>>a>>b>>c;
    large=great(a,b,c);
}
