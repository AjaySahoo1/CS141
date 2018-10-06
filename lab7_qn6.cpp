/******************************************************************************
 Write a C++ program to find reverse of any number using recursion.

*******************************************************************************/

#include <iostream>
using namespace std;
//Define function
int reverse(int num) 
{
  //Declare static variables
  static int rem,sum;
  ..Put condition for recursion and its turnmination
  if(num>0)
  {
    rem = num%10;
    sum = sum*10 + rem;
    /* function call itself. */
    reverse(num/10);
  }
  else
  {
    return sum;
  }
}
//Main Function
int main()
{
  Declare variables
  int num,rev;
  //Taking input
  cout<<"Enter number:";
  cin >> num;
  //Called reverse function
  rev = reverse(num);
  //Printing the reversed value
  cout << "Reverse of a input number is:" << rev;
  return 0;
}
