//Write a c++ program to enter marks of 5 subjects & calculate total, average, percentage 
//First include library
#include<iostream>
using namespace std;
//Use main function
int main()
{
	//Declare variables
	int mth,cs,phy,chem,bio;
	//Ask all the required data to input
	cout<<"Mark in maths"<<"\n";
	cin>>mth;
	cout<<"Mark in cs"<<"\n";
	cin>>cs;
	cout<<"Mark in physics"<<"\n";
	cin>>phy;
	cout<<"Mark in chemistry"<<"\n";
	cin>>chem;
	cout<<"Mark in biology"<<"\n";
	cin>>bio;
	//Calculate total,average,percentage
	float total=(mth+cs+phy+chem+bio);
	float avg=total/5;
	cout<<"Total:"<<total<<"\n";
	cout<<"Average:"<<avg<<"\n";
	cout<<"Percentage:"<<avg<<"%"<<"\n";
	return 0;
}
