//Write the program with a function that takes two int parameters and print sum of all even number between them
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int sumEvenNumbers(int firstNum,int secondNum, int sumEven)
{
	cin>>firstNum;
	cin>>secondNum;
	//Declare a variable named sum which has initial value zero
	sumEven=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+2;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumEven=sumEven+z;
			z=z+2;
		}
		cout<<"Sum:"<<sumEven<<endl;
	}
	else
	{
		z=z+1;
		while(z<secondNum)
		{
			sumEven=sumEven+z;
			z=z+2;
		}
		cout<<"Sum:"<<sumEven<<endl;
	}
}

//Driver function
int main()
{
	int a,b,sumEven;
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
	//Call by reference
	sumEvenNumbers(a,b,sumEven);
	return 0;
}
