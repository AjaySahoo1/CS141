/******************************************************************************
Write a C++ program to print all natural numbers between 1 to n using recursion.
*******************************************************************************/

#include <iostream>

using namespace std;
//Define function
int num(int i,int n)
{
    if(i>n)//Put condition to end the recursion
    return 1;
    else
    {
        cout<<i<<" ";//Print the values
        num(i+1,n);//Recursion
    }
}
//Main function
int main()
{
    int n;//Declare variable
    //Take Input
    cout<<"Enter number:";
    cin>>n;
    
    num(1,n);//call the function

    return 0;
}
