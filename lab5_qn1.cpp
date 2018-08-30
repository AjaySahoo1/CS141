//Write a c++ program to find maximum between two numbers
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int p,t;
	//Input all the required data
	cout<<"Enter 1st number"<<"\n";
	cin>>p;
	cout<<"Enter 2nd number"<<"\n";
	cin>>t;
	//Write condition to find the maximum between two numbers
	if(p>t)
		{
		cout<<"The maximum value between two numbers is:"<<p<<"\n";
		}
	else
		{
		cout<<"The maximum value between two numbers is:"<<t<<"\n";
		}
	return 0;
}

