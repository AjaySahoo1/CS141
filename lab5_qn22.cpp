//Write a c++ program to print natural numbers from 1 to n using while loop
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int n;
	int i=1;
	//Input all the required data
	cout<<"Enter number"<<"\n";
	cin>>n;
	//Write condition to print natural numbers from 1 to n using while loop
	while(i<=n){
		cout<<i<<"\n";
		i++;
	}
	return 0;
}

