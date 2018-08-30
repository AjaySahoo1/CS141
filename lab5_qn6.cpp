//Write a c++ program to find whether year is leap year or not
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int p;
	//Input all the required data
	cout<<"Enter year"<<"\n";
	cin>>p;
	//Write condition to whether year is leap year or not
	if(p%4==0)
		{
		cout<<"The number is leap year"<<"\n";
		}
	else
		{
		cout<<"The number is not leap year"<<"\n";
		}
	return 0;
}

