/* Write a program to show string repeatedly by shifting top character of string to right.  */

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin>>str;
    
    //Implementation of strcpy function
    char str2[20];
    strcpy(str2,str);//Copying value of str to str2
    cout<<"Output of strcpy function"<<endl;
    cout<<str2<<endl;//Print output
    
    //Implementation of strcat function
    cout<<"Output of strcat function"<<endl;
    strcat(str,str2);//Concatenating str with str3
    cout<<str<<endl;//output represented by the string whcih is concatenated by other string
    
    //Implementation of strlen function
    cout<<"Use of strlen function"<<endl;
    cout<<"Lenght of str:"<<strlen(str)<<endl;//Shows the length of str
    cout<<"Lenght of str2:"<<strlen(str2)<<endl;//Show the length of str2
    
    //Implementation of strcmp function
    cout<<"Use of strcmp function"<<endl;
    int result=strcmp(str,str2);//Compares the lengthof two strings
    if(result==0)
    cout<<"Strings are same"<<endl;
    else if(result>0)
    cout<<"The length of str is more than str2"<<endl;
    else
    cout<<"The length of str is less than str2"<<endl;
    
    //Implementation of strchr function
    cout<<"Use of strchr function"<<endl;
    char str1[20];
    cout<<"Enter string"<<endl;
    cin>>str1;
    char c;
    cout<<"Enter the character you want to find in the string"<<endl;
    cin>>c;
    char* ch = strchr(str1, c); 
    if(ch!=NULL)//Check whether character is present in the string or not
    {
        cout<<"Character is present in the string"<<endl;
        while (ch!=NULL)//Loop to find out the postion at which the Character is occuring in the string
        {
            cout<<"found at:"<<(ch-str1+1)<<endl;
            ch=strchr(ch+1,c);
        }
    }
    else
    {
        cout<<"Character is absent in the string"<<endl;
    }
    
    //Implementation of strstr function
    cout<<"Use of strstr function"<<endl;
    char str3[20];
    cout<<"Enter str3"<<endl;
    cin>>str3;
    cout<<"Str3="<<str3<<endl;
    char str4[20];
    cout<<"Enter str4"<<endl;
    cin>>str4;
    cout<<"Str4="<<str4<<endl;
    char* p=strstr(str3,str4);//Check the first occurance of str4 in str3
    if(p)
    {
        strcpy(p,"Sahoo");
        cout<<"Str4 is present in str3"<<endl;
    }
    else
    cout<<"Str4 is not present in str3"<<endl;
    cout<<str3<<endl;
    return 0;
}
