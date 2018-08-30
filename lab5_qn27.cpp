//Write a c++ program to print sum of numbers from 1 to n
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int n;
	int z=0;
	//Input all the required data
	cout<<"Enter number"<<"\n";
	cin>>n;
	//Write condition to print sum of numbers from 1 to n
	for(int i=1;i<=n;i++){
		z=z+i;
	}
	cout<<z<<"\n";
	return 0;
}

