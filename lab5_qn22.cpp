//Write a c++ program to print natural numbers from 1 to n
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int n;
	//Input all the required data
	cout<<"Enter number"<<"\n";
	cin>>n;
	//Write condition to print natural numbers from 1 to n
	for(int i=1;i<=n;i++){
		cout<<i<<"\n";
	}
	return 0;
}

