//Write a c++ program to find whether number is even or odd
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int p;
	//Input all the required data
	cout<<"Enter number"<<"\n";
	cin>>p;
	//Write condition to find whether number is even or odd
	if(p%2==0)
		{
		cout<<"The number is even"<<"\n";
		}
	else
		{
		cout<<"The number is odd"<<"\n";
		}
	return 0;
}

