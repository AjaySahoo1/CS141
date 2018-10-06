/******************************************************************************
 Write a C++ program to check whether a number is palindrome or not using recursion.
*******************************************************************************/

#include <iostream>
using namespace std;
//Define a function
int Sum(int num) 
{
    //Use static variable so that it won't change during recursion
    static int rem,sum=0;
    //Put condition to find the sum of digits
    if(num>0)
    {
      rem = num%10;
      sum = sum + rem;
      //Recursion
      Sum(num/10);
    }
    //Ending the recursion
    else
    {
        return sum;
    }
}
//Main function
int main()
{
    int num,sum;
    //Take input
    cout<<"Enter number:";
    cin >> num;
    //Called function
    sum = Sum(num);
    //Print the sum
    cout<<"Sum of digits:"<<sum;
    return 0;
}
