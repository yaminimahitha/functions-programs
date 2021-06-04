#include<bits/stdc++.h>
using namespace std;
int area_circle(float r)
{
	float area;
	area=(3.14)*r*r;
	cout<<"area of circle= "<<area;
}
int main()
{
	float circle;
	float r;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>r;
	circle=area_circle(r);
	
}
