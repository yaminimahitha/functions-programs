#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibo(int n)
{
	if(n<=1)
	{
		return n;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=fibo(n-1)+fibo(n-2);
}
int main()
{
	int n,res;
	cout<<"enter the n value"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	dp[i]=-1;
	res=fibo(n);
	for(int i=0;i<=n;i++)
	cout<<dp[i]<<" ";
	cout<<"\n";
	cout<<res;
	return 0;
}
