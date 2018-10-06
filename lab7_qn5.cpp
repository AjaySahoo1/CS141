/******************************************************************************
Write a C++ program to print sum of all even or odd numbers in given range using recursion.
(Exluding both upper and lower limits)
*******************************************************************************/
#include<iostream>
using namespace std;
//Define a function
int printevenodd(int x, int limit)
{
    if(x >= limit)
        return 0;
    // Recursively call to printevenodd to get next value and sum
    return x+printevenodd(x + 2, limit);
}
//Main function
int main()
{
    int x,y;
    // Inputting lower and upper limit from user
    cout<<"Enter lower limit: ";
    cin>>x;
    cout<<"Enter upper limit: ";
    cin>>y;
    char z;
    cout<<"For Even type e and for odd o:";
    cin>>z;
    if(z=='e' && x%2==0)
    {
        cout<<"You have choosen sum of even numbers to show"<<endl;
        cout<<"Sum of even Numbers from "<<x <<" to "<<y<<endl;
        cout<<printevenodd(x+2, y);
    }
    else if(z=='e' && x%2!=0)
    {
        cout<<"You have choosen sum of even numbers to show"<<endl;
        cout<<"Sum of even Numbers from "<<x <<" to "<<y<<endl;
        cout<<printevenodd(x+1, y);
    }
    else if(z=='o' && x%2!=0)
    {
        cout<<"You have choosen odd sum of numbers to show"<<endl;
        cout<<"Sum of odd Numbers from "<<x <<" to "<<y<<endl;
        cout<<printevenodd(x+2, y);
    }
    else
    {
        cout<<"You have choosen odd sum of numbers to show"<<endl;
        cout<<"Sum of odd Numbers from "<<x <<" to "<<y<<endl;
        cout<<printevenodd(x+1, y);
    }
    return 0;
}