//Write a c++ program to find area of equilateral triangle
//First include library
#include<iostream>
#include<math.h>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	float side;
	//Input all the required data
	cout<<"Side of equilateral triangle"<<"\n";
	cin>>side;
	//Calculate area of triangle
	double area=(sqrt(3)/4)*(side)*(side);

	cout<<"Area of triangle:"<<area<<"\n";
	return 0;
}
