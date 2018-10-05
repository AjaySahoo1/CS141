/******************************************************************************

 Write a C++ program to find factorial of any number using recursion.
*******************************************************************************/

#include <iostream>

using namespace std;
//Define Factorial Fuction having one formal parameter
int fact(int i)
{
    //Put condition to end the recursion
    if(i==0)
    return 1;
    else
    {
        //return factorial by recursion
        return i*fact(i-1);
    }
}
//Main Function
int main()
{
    int n;//Declare variable for input
    //Take the number as input
    cout<<"Enter number:"<<endl;
    cin>>n;
    //Put condition to check the validity of the number
    if(n<0)
    {
        cout<<"Invalid input";
    }
    else
    {
      //Print the factorial
      cout<<"Factorial of "<<n<<"="<<fact(n);
    }

    return 0;
}
