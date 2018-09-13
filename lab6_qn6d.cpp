//Write the program with a function that takes two int parameters and print sum of squares of all even number between them
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int sumSquareEvenNumbers(int firstNum,int secondNum, int sumSquareEven)
{
	cin>>firstNum;
	cin>>secondNum;
	//Declare a variable named sum which has initial value zero
	sumSquareEven=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+2;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumSquareEven=sumSquareEven+z;
			z=z+2;
		}
		cout<<"Sum:"<<sumSquareEven<<endl;
	}
	else
	{
		z=z+1;
		while(z<secondNum)
		{
			sumSquareEven=sumSquareEven+z;
			z=z+2;
		}
		cout<<"Sum:"<<sumSquareEven<<endl;
	}
}

//Driver function
int main()
{
	int a,b,sumSquareEven;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by reference
	sumSquareEvenNumbers(a,b,sumSquareEven);
	return 0;
}
