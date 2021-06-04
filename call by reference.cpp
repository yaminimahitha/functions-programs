//call by reference without pointers
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
//call by reference by using pointers//
#include <iostream>
using namespace std;

// function prototype with pointer as parameters
void swap(int*, int*);

int main()
{

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function by passing variable addresses
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

// function definition to swap numbers
void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

