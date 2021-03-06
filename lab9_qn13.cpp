/* Create an array of size 10. 
Use a loop to print array using the normal index method as well as the pointer method. */

#include <iostream>
using namespace std;
int main()
{
    int ar[10]={1,2,3,4,5,6,7,8,9,0};//Creating an array of size 10
    //Print values using normal index method
    cout<<"Using normal index method"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<"Using pointer method"<<endl;
    //Print values using pointer method
    int* p=&ar[0];
    for(int i=0;i<10;i++)
    {
        cout<<*(p+i)<<" ";
    }
    return 0;
}
