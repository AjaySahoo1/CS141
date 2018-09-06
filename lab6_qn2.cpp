//Write a c++ program to print hollow square star patern
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
		//Put condition so that it will print all the stars if row number is first and last
		if(i==1 || i==5)
		{
			//Use loop so that it will print stars in the row
			for(int j=1;j<=n;j++)
			{
				cout<<"*";
			}
		}
		//Then the else statement
		else{
			//To print the first star of the row 
			cout<<"*";
			//to print the required number of spaces in between first and last star of the row
			for(int j=1;j<=(n-2);j++)
			{
				cout<<" ";
				
			}
			//To print the last star of the row 
			cout<<"*";
		}
		//To change the rows
		cout<< endl;
	}

return 0;
}
