/******************************************************************************
 Write a C++ program to check whether a number is palindrome or not using recursion.
*******************************************************************************/

#include <iostream>
using namespace std;
//Define a function
int pal(int num) 
{
    //Use static variable so that it won't change during recursion
    static int rem,sum;
    //Put condition to find the reverse
    if(num>0)
    {
      rem = num%10;
      sum = sum*10 + rem;
      //Recursion
      pal(num/10);
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
    int num,rev;
    //Take input
    cout<<"Enter number:";
    cin >> num;
    //Called function
    rev = pal(num);
    //Put condition to check it is pallindrome or not
    if(rev==num)
    cout<<"It is a pallindrome number";
    else
    cout<<"It is not a pallindrome number";
    return 0;
}
