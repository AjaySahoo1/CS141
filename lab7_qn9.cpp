/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int num(int i,int n)
{
    i;
    if(i>n)
    return 1;
    else
    {
        cout<<i<<" ";
        num(i+1,n);
    }
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    num(1,n);

    return 0;
}
