//Write a c++ program to print pyramid star pattern
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	int n=5, k;
	//First enter rows
	for(int i=1;i<=n;i++,k=0)
	{
		//Printing spaces in inverted right angle triangle pattern
		for(int j=1;j<=(n-i);j++)
		{
		cout<<" ";
		}
		//Printing required number of starts after the spaces	
		while(k!=(2*i)-1){
		cout<<"*";
		k++;
		}
		//Changing the rows
		cout<<endl;
		
	}	
return 0;
}
