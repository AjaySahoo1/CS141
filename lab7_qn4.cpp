/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int sum(int n)
{
    if(n!=0)
    return n+sum(n-1);
    else
    return 0;
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"sum of numbers from 1 to n:"<<sum(n);
    return 0;
}