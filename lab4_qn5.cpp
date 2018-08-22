//Write a c++ program to find third angle of triangle from other two angles
//First include library
#include<iostream>
#include<math.h>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	float a1,a2;

	//Input all the required data
	cout<<"1st angle of triangle in degree"<<"\n";
	cin>>a1;
	cout<<"2nd angle of triangle in degree"<<"\n";
	cin>>a2;
	//Calculate 3rd angle of triangle
	float a3=180-(a1+a2);

	cout<<"3rd angle of triangle in degree:"<<a3<<"\n";
	return 0;
}
