//Write a c++ program to create user defined functions which can change lower case character to upper and vice-versa
//Declare library
#include<iostream>
using namespace std;
//User Defined Function to change lower case letter to upper case
char toUpper(char inputChar)
{
char upperChar=inputChar-32;
cout<<"UpperCase of "<<inputChar<<" is "<<upperChar<<endl;
}
//User Defined Function to change upper case letter to lower case
char toLower(char inputChar)
{
char lowerChar=inputChar+32;
cout<<"LowerCase of "<<inputChar<<" is "<<lowerChar<<endl;
}
//Driver funtion
int main()
{
//Declare variable
char inputChar;
cout<<"Enter character"<<endl;
cin>>inputChar;
//Drive the function
if(inputChar>='a')
{
toUpper(inputChar);
}
else
{
toLower(inputChar);
}
retun 0;
}
