//Write a c++ program to find area of triangle
//First include library
#include<iostream>
#include<math.h>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	float ht,bs;

	//Input all the required data
	cout<<"Height of triangle"<<"\n";
	cin>>ht;
	cout<<"Base of triangle"<<"\n";
	cin>>bs;
	//Calculate area of triangle
	float area=(0.5)*(ht)*(bs);

	cout<<"Area of triangle:"<<area<<"\n";
	return 0;
}
