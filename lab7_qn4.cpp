/******************************************************************************
 Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

*******************************************************************************/

#include <iostream>
using namespace std;
//Define function
int sum(int n)
{
  //Put condition for recursion and its turmination
  if(n!=0)
    return n+sum(n-1);
  else
    return 0;
}
//Main function
int main()
{
  //Declare variable
  int n;
  //Taking input
  cout<<"Enter n:";
  cin>>n;
  //Printing the value
  cout<<"sum of numbers from 1 to n:"<<sum(n);
  return 0;
}
