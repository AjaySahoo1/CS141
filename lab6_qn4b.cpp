//Write the program with a function that takes two int parameters and shows minimum value(by reference)
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int ask(int& a,int& b)
{
	cin>>a;
	cin>>b;
}
//Show the min
void min(int& a,int& b)
{
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
	//Call by reference
	ask(a,b);
	min(a,b);
	return 0;
}
