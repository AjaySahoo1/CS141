//Write the program with a function that takes two int parameters and print sum of squares all odd numbers between them
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int sumSquareOddNumbers(int firstNum,int secondNum,int sumSquareOdd)
{
	cin>>firstNum;
	cin>>secondNum;
	//Declare a variable named sum which has initial value zero
	sumSquareOdd=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+1;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumSquareOdd=sumSquareOdd+(z*z);
			z=z+2;
		}
		cout<<"Sum:"<<sumSquareOdd<<endl;
	}
	else
	{
		z=z+2;
		while(z<secondNum)
		{
			sumSquareOdd=sumSquareOdd+(z*z);
			z=z+2;
		}
		cout<<"Sum:"<<sumSquareOdd<<endl;
	}
}

//Driver function
int main()
{
	int a,b,sumSquareOdd;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by reference
	sumSquareOddNumbers(a,b,sumSquareOdd);
	return 0;
}
