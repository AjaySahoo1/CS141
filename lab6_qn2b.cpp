//Write the program with a function that takes two int parameters , adds them together, and return the sum(by reference)
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

//Driver function
int main()
{
	int a,b,s;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by reference
	ask(a,b);
	sum(a,b);
	return 0;
}
