//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.
#include <iostream>
#include<cstring>
using namespace std;
void revtString(char* p)
{
    int end;
    int count=0;
    for(int i=0;(*(p+i))!='\0';i++)//Loop to count the size of array
    {
        count++;
    }
    end=count-1;
    for(int i=end;i>=0;i--)//Loop to print values from the last term
    {
        cout<<*(p+i);
    }
}
int main()
{
    int size;
    cout<<"Enter max size"<<endl;
    cin>>size;
    char ar[size];//Declare array with max size
    cout<<"Enter input to array"<<endl;
    cin>>ar;
    
    char* p=&ar[0];
    revtString(p);
    return 0;
}
