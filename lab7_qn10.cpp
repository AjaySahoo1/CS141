/******************************************************************************
Write a C++ program to generate nth Fibonacci term using recursion.
*******************************************************************************/
#include<iostream>
using namespace std;
//Define a function
int fibonacci(int n)
{
    //Put condition
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
//Main function
int main()
{
    //Declare variables
    int n,i=0;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"Fibonacci Series is as follows"<<endl;
    while(i<n)
    {
        cout<<fibonacci(i)<<" ";
        i++;
    }
    return 0;
}