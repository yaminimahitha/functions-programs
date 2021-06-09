#include<bits/stdc++.h>
using namespace std;
bool isprime(int n,int i=2)//default value for i=2
{
	if(n<=2)
		return (n==2)?true:false;//if n is 2 then it return true if it is not 2 it returns false		
	if(n%i==0)//if n % with i is 0 return false
		return false;
	if(i*i>n)
		return true;
		//i*i!>n then increments i and checks is it prime or not
		return isprime(n,i+1);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(isprime(n))
	{
		cout<<"prime number";
	}
	else
	{
		cout<<"Not a prime number";
	}
	return 0;
}
