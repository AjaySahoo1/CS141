//Write a c++ program to print inverted mirrored right angled triangle star pattern
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	int n=5, k,z=n;
	//First enter rows
	for(int i=1;i<=n;i++,k=0)
	{
		//Printing spaces in right angle triangle pattern
		while(k!=(i-1))
		{
		cout<<" ";
		k++;
		}		
		//Printing stars
		for(int j=n;j>=i;j--)
		{
		cout<<"*";
		}
		
		//Changing the rows
		cout<<endl;
		
		
	}	
return 0;
}
