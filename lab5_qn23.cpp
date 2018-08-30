//Write a c++ program to print natural numbers from n to 1
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
	int i=n;
	//Write condition to print natural numbers from n to 1
	while(i!=0){
		cout<<i<<"\n";
		i--;	
	}
	return 0;
}

