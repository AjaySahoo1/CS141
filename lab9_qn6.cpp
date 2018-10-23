/*Write a function countEven(int*, int) which receives an integer array and its size,
and returns the number of even numbers in the array.*/
#include <iostream>
using namespace std;
int countEven(int* p,int size)
{
    int count=0;
    for(int i=0;i<size;i++)//Loop to check each value
    {
        if(*(p+i)%2==0)//condition to check the value is even or not
        {
            count++;//count the number of even numbers
        }
    }
    return count;
}
int main()
{
    //Declare array of max size adn give input
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int ar[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    int* p=&ar[0];//Point to array
    cout<<"No. of even numbers:"<<countEven(p,size);//call the function
}
