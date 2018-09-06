//Write a c++ program to print inverted right angle star patern
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
		for(int j=n;j>=i;j--)
		{
			cout<<"*";
		}
		//To change the rows
		cout<< endl;
	}
return 0;
}
