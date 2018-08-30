//Write a c++ program to find maximum between three numbers
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int p,t,x;
	//Input all the required data
	cout<<"Enter 1st number"<<"\n";
	cin>>p;
	cout<<"Enter 2nd number"<<"\n";
	cin>>t;
	cout<<"Enter 3rd number"<<"\n";
	cin>>x;
	//Write condition to find the maximum between three numbers
	if(p>t){
		if(p>x)
			{
			cout<<"The maximum value between two numbers is:"<<p<<"\n";
			}
		else
			{
			cout<<"The maximum value between two numbers is:"<<x<<"\n";
			}
	}
	else{
		if(t>x)
			{
			cout<<"The maximum value between two numbers is:"<<t<<"\n";
			}
		else
			{
			cout<<"The maximum value between two numbers is:"<<x<<"\n";
			}
	}
	return 0;
}

