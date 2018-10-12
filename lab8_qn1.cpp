//Write a program to find sum of all elements of an array. (Use functions)
#include<iostream>
using namespace std;
//Define function with proper parameters
int arr(int ar[], int size)
{
	int i;
	int sum=0;
//Use loop to find the sum of all elements present in the array
	for(i=0;i<size;i++)
	{
		sum=sum+ar[i];
	}
//Print the sum
	cout<<"Sum of all elements in array:"<<sum<<endl;
}
//Main function
int main()
{
//Ask user to put the size of the array
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	int ar[size];
//Ask user to input values to the array
	cout<<"Put input to array"<<endl;
//Use loop to input the values
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}
//Call the function
	arr(ar,size);
	return 0;
}
