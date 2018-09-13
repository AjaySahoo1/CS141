//Write the program with a function that takes two int parameters , adds them together, and return the sum(by value)
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
void askSum(int a,int b)
{
	cout<<"Enter 1st number:"<<endl;\
	cin>>a;
	cout<<"Enter 2nd number:"<<endl;
	cin>>b;
	//int sum= a+b;
	//cout<<"sum:"<<sum<<endl;
}

//Driver function
int main()
{
int a,b,sum;
//Call by value
askSum(a,b);
cout<<a;
cout<<b;
return 0;
}
