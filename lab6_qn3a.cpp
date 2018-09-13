//Write the program with a function that takes two int parameters and shows maximum value
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int askMax(int a,int b)
{
	cin>>a;	
	cin>>b;
	if(a>b)
	{
	cout<<"Enter 1st number is max"<<endl;
	}
	else
	{
	cout<<"Enter 2nd number is max"<<endl;
	}
}

//Driver function
int main()
{
	int a,b;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by value
	askMax(a,b);
	return 0;
}
