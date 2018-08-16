//First include library
#include<iostream>
using namespace std;
//Include main function
int main()
{
//Declare variables corresponding to basic datatypes
int a;
float b;
double c;
char d;
bool e;
//Define variables
a=7;
b=3.4;
c=5.667;
d='r';
e=(a==b);
//Print the value of all variables & the size of all the datatypes
cout<<"a="<<a<<"\n";
cout<<"b="<<b<<"\n";
cout<<"c="<<c<<"\n";
cout<<"d="<<d<<"\n";
cout<<"e="<<e<<"\n";
cout<<"size of int="<<sizeof(a)<<"\n";
cout<<"size of float="<<sizeof(b)<<"\n";
cout<<"size of double="<<sizeof(c)<<"\n";
cout<<"size of char="<<sizeof(d)<<"\n";
cout<<"size of boolean="<<sizeof(e)<<"\n";

//The rest of qn 2 starts from here
cout<<"Sir the remaining of 2nd qn starts from here...\n";

//Perform all the arithmetic operators & print the values
int x=4;
cout << "sum of a and x:"<< a+x <<"\n";
cout << "difference of a and x:"<< a-x <<"\n";
cout << "product of a and x:"<< a*x <<"\n";
cout << "divison of a and x:"<< a/x <<"\n";
cout << "remainder of a and x:"<< a%x <<"\n";
return 0;
}
