//Write the program with a function that takes two int parameters and print sum of all odd numbers between them
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int sumOddNumbers(int firstNum,int secondNum,int sumOdd)
{
	cin>>firstNum;
	cin>>secondNum;
	//Declare a variable named sum which has initial value zero
	sumOdd=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+1;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumOdd=sumOdd+z;
			z=z+2;
		}
		cout<<"Sum:"<<sumOdd<<endl;
	}
	else
	{
		z=z+2;
		while(z<secondNum)
		{
			sumOdd=sumOdd+z;
			z=z+2;
		}
		cout<<"Sum:"<<sumOdd<<endl;
	}
}

//Driver function
int main()
{
	int a,b,sumOdd;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by reference
	sumOddNumbers(a,b,sumOdd);
	return 0;
}
