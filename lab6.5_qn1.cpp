/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    float sum;
    
    for(z=1;z<100;z++)
    {
        for(y=1;y<100;y++)
        {
            x=100-(y+z);
            sum=(x+(0.5*y)+(3*z));
            if(sum==100 && x>0)
            {
            cout<<"No. of apples:"<<x<<" No. of bananas:"<<y<<" No. of mangoes:"<<z;
            cout<<endl;
            }
        }
    }
    return 0;
}
