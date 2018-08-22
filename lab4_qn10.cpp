//Write a c++ program to find compound interest
//First include library
#include<iostream>
#include<math.h>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	float p,t,r,n;
	//Input all the required data
	cout<<"Principal ammount"<<"\n";
	cin>>p;
	cout<<"Time"<<"\n";
	cin>>t;
	cout<<"Rate"<<"\n";
	cin>>r;
	cout<<"No. of times interest is compounded per year"<<"\n";
	cin>>n;
	//Calculate area of compound interest
	double ci=(p*(pow((1+(r/n)),(n*t))))-p;
	cout<<"compound interest:"<<ci<<"\n";
	return 0;
}
