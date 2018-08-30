//Write a c++ program to find whether a number is divisible by 5 and 11 or not
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
	
	//Write condition to find whether a number is divisible by 5 and 11 or not
	if(p%5==0 && p%11==0)
		{
		cout<<"The number is divisible by 5 and 11"<<"\n";
		}
	else
		{
		cout<<"The number is not divisible by 5 and 11"<<"\n";
		}
	return 0;
}

