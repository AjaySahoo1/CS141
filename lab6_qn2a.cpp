//Write the program with a function that takes two int parameters , adds them together, and return the sum(by value)
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int askSum(int a,int b)
{
	cin>>a;	
	cin>>b;
	cout<<"sum:"<<a+b<<endl;
	
}

//Driver function
int main()
{
	int a,b;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by value
	askSum(a,b);
	return 0;
}
