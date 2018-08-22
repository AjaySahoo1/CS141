//Write a c++ program to find simple interest
//First include library
#include<iostream>
#include<math.h>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	float p,t,r;
	//Input all the required data
	cout<<"Principal ammount"<<"\n";
	cin>>p;
	cout<<"Time"<<"\n";
	cin>>t;
	cout<<"Rate"<<"\n";
	cin>>r;
	//Calculate area of simple interest
	double i=(p*t*r)/100;
	cout<<"Simple interest:"<<i<<"\n";
	return 0;
}
