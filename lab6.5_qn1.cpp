/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Include library
#include <iostream>

using namespace std;
//Main function
int main()
{
    //Declare required variables
    int x,y,z;
    float sum;
    //Use loop to find variation in number of one variable
    for(z=1;z<100;z++)
    {
        //Use nested loop to find variation in 2nd variable
        for(y=1;y<100;y++)
        {
            //Express 3rd variable in terms of other twos
            x=100-(y+z);
            //Put given equation
            sum=(x+(0.5*y)+(3*z));
            //Put condition to find required numbers
            if(sum==100 && x>0)
            {
            //Print the values
            cout<<"No. of apples:"<<x<<" No. of bananas:"<<y<<" No. of mangoes:"<<z;
            cout<<endl;
            }
        }
    }
    return 0;
}

