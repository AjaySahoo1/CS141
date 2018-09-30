/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Include library
#include <iostream>
using namespace std;
//Main Function
int main()
{
    //Declare variables
    int i,j;
    //Initiate loop to find sum of natural numbers from 1 to i
    for(i=1;i>0;i++)
    {
        //Find sum
        long sum=i*(i+1)/2;
        //Initiate loop to find the square
        for(j=1;j<=i;j++)
        {
            //Find square
            long sq=j*j;
            //Put conditions to get required values
            if(sq==sum && sq>1225)
            {
                //Print the required values
                cout<<"The next number is:"<<sq;
                //Put condition to break the first loop and get only one output
                i=-1;
            }
             
        }
           
    }
    return 0;
}
