/*Write a program to merge 2 arrays (just one after another into another array), 
find maximum of 2 arrays [maximum element of all the elements in both the arrays],
find minimum of 2 arrays [similar to maximum]. (Use functions for each)*/
#include<iostream>
using namespace std;
//Define function with proper parameters
int arr(int ar1[], int size1,int ar2[],int size2)
{
	int size3=size1+size2;
	int ar3[size3];
	int k=0,j=0;
//Use loop to find all elements present in the array
	for(int i=0;i<size3;i++)
	{
	    if(i<size1)
	    {
	        ar3[i]=ar1[k];
	        k++;
	    }
	    else
	    {
	        ar3[i]=ar2[j];
	        j++;
	    }
	}
//Print the values of merged array
    cout<<"Elements of merged array"<<endl;
	for(int i=0;i<size3;i++)
	{
	    cout<<ar3[i]<<" ";
	}
	cout<<endl;
//Sort the merged array in ascending order
    int x;
	for(int i=0;i<size3;i++)
	{
		for(int j=i+1;j<size3;j++)
		{
			if(ar3[i]>ar3[j])
			{
				x=ar3[i];
				ar3[i]=ar3[j];
				ar3[j]=x;
			}
		}
	}
	cout<<endl;
	cout<<"Maximum element of all the elements in both the arrays:"<<ar3[size3-1]<<endl;
	cout<<"Minimum element of all the elements in both the arrays:"<<ar3[0]<<endl;
}
//Main function
int main()
{
//Ask user to put the size of 1st array
	int size1;
	cout<<"Enter size of 1st array"<<endl;
	cin>>size1;
	int ar1[size1];
//Ask user to input values to the array
	cout<<"Put input to 1st array"<<endl;
//Use loop to input the values
	for(int i=0;i<size1;i++)
	{
		cin>>ar1[i];
	}
//Ask user to put the size of 2nd array
	int size2;
	cout<<"Enter size of 2nd array"<<endl;
	cin>>size2;
	int ar2[size2];
//Ask user to input values to the 2nd array
	cout<<"Put input to 2nd array"<<endl;
//Use loop to input the values
	for(int i=0;i<size2;i++)
	{
		cin>>ar2[i];
	}
//Call the function
	arr(ar1,size1,ar2,size2);
	return 0;
}
