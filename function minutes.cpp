#include<bits/stdc++.h>
using namespace std;
int convert_mins(int hrs,int mins)
{
	//mins represents minutes hrs represents hours.
	//one hour contains 60 minutes so we have to multiply with hours and add minutes to get total minutes
	mins=hrs*60+mins;
	return mins;
}
int main()
{
	int hrs,mins,Total_mins;
	cout<<"Enter the hours and the minutes"<<endl;
	cin>>hrs;
	cin>>mins;
	Total_mins=convert_mins(hrs,mins);
	cout<<"Totalminutes= "<<Total_mins;
}
