//Write a c++ program to calculate tax-rate using functions
//include library
#include<iostream>
using namespace std;
//Function to ask user the unitCst, units, and taxRt and return values
void ask(float& unitCst,float& units,float& taxRt)
{
	cout<<"What is the unit cost?"<<endl;
	cin>>unitCst;
	cout<<endl;
	cout<<"What is the units?"<<endl;
	cin>>units;
	cout<<endl;
	cout<<"What is the tax rate?"<<endl;
	cin>>taxRt;
	cout<<endl;
}
/*Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue.*/
void returnValues(float& unitCst,float& units,float& taxRt,float& salesTx,float& totDue)
{
	salesTx= taxRt*(units*unitCst);
	totDue= salesTx+ (units*unitCst);
}
/*Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format.*/
float readable(float& unitCst,float& units,float& taxRt,float& salesTx,float& totDue)
{
	cout<<"Unit cost="<<unitCst<<endl;
	cout<<"Units="<<units<<endl;
	cout<<"Tax Rate="<<taxRt<<endl;
	cout<<"Sales Tax="<<salesTx<<endl;
	cout<<"Total Due="<<totDue<<endl;
}
/*Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. */
int main()
{
float unitCost,unitsPurch,taxRate,salesTax,totalDue;
ask(unitCost,unitsPurch,taxRate);
returnValues(unitCost,unitsPurch,taxRate,salesTax,totalDue);
readable(unitCost,unitsPurch,taxRate,salesTax,totalDue);
return 0;
}
