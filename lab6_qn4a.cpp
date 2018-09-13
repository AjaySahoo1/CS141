//Write the program with a function that takes two int parameters and shows minimum value
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int askMin(int a,int b)
{
	cin>>a;	
	cin>>b;
	if(a<b)
	{
	cout<<"Enter 1st number is min"<<endl;
	}
	else
	{
	cout<<"Enter 2nd number is min"<<endl;
	}
}

//Driver function
int main()
{
	int a,b;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by value
	askMin(a,b);
	return 0;
}
