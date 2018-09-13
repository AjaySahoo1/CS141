//Write the program with a function that takes two int parameters and show the output according to the user choice
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int ask(int& a,int& b)
{
	cin>>a;
	cin>>b;
}
//Show the sum
void sum(int& a,int& b)
{
	int s=a+b;
	cout<<"Sum:"<<s<<endl;
}
//Show the max
void max(int& a,int& b)
{
	if(a>b)
	{
	cout<<"Enter 1st number is max"<<endl;
	}
	else
	{
	cout<<"Enter 2nd number is max"<<endl;
	}
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
	int a,b,s,choice;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	ask(a,b);
	cout<<"What do u want to do"<<endl;
	cout<<"Options 1.Sum 2.Max 3.Min"<<endl;
	cin>>choice;
	//Call by reference
	if(choice==1)
	{
	sum(a,b);
	}
	else if(choice==2)
	{
	max(a,b);
	}
	else
	{
	min(a,b);
	}
	return 0;
}
