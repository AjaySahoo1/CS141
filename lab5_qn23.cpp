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
	//Write condition to print natural numbers from n to 1
	for(int i=n;i!=0;i--){
		cout<<i<<"\n";
	}
	return 0;
}

