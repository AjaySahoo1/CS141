//Write a c++ program to print half diamond star patern
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	int n=5;
	//First enter rows 
	for(int i=1;i<=n;i++)
	{
		//Use loop so that it will print stars in the row
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		//To change the rows
		cout<< endl;
	}
	for(int i=1;i<n;i++)
	{		
		//Use loop so that it will print stars in the row
		for(int j=(n-1);j>=i;j--)
		{
			cout<<"*";
		}
		//To change the rows
		cout<< endl;
	}
return 0;
}
