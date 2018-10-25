/* Implement your versions for the following functions: 
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr  */

#include <iostream>
#include<cstring>
using namespace std;

/*char* copy(char* str2,char* str)
{
	if (str==NULL)
		return NULL;
	char* ptr=str2;
	while(*str!='\0')
	{
		*str2=*str;
		str2++;
		str++;
	}
	*str2='\0';
	return ptr;
}

char* cat(char* str,char* str3)
{
	int size1=0;//size2=0;
	char* z=str;
	while(*z!='\0')
	{
		size1++;
		z++;
	}
	cout<<"Size of str:"<<size1<<endl;//<<" and size of str3:"<<size2<<endl;
	char* p=str+size1;
	while(*str3!='\0')
	{
		*p++=*str3++;
	}
	*p='\0';
	return str;
}

int len(char* str)
{
	int size=0;
	while(*str!='\0')
	{
		size++;
		str++;
	}
	return size;
}

int compare(char* a,char*b)
{
int result=0;
	for (int i = 0; ; i++)
	{
		if (*(a+i) != *(b+i))
		{
		    result= *(a+i)-*(b+i);
			break;
		}
	}
return result;

}
*/
char* ckch(char* str,char c)
{
char* p=str;
for(int i=0;*str!='\0';i++)
{
if(*(p+i)==c)
{
cout<<"Give character is present in the string"<<endl;
while (p!=NULL)//Loop to find out the postion at which the Character is occuring in the string
        {
            cout<<"found at:"<<(p-str+1)<<endl;
            p=p+1;
        }

}

}
int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin>>str;
    
 /* //Implementation of strcpy function
    char str2[20];
    cout<<"Output of str2:"<<copy(str2,str)<<endl;
    
    //Implementation of strcat function
	char str3[20];
	cout<<"Enter other string"<<endl;
	cin>>str3;
    cout<<"Output after strcat function:"<<cat(str,str3)<<endl;
   //Implementation of strlen function
    cout<<"Use of strlen function"<<endl;
	char* p=str;
    cout<<"Length of str:"<<len(p)<<endl;
    
    //Implementation of strcmp function
    cout<<"Use of strcmp function"<<endl;
	char str4[20];
	cout<<"Enter other string"<<endl;
	cin>>str4;
    int result=compare(str,str4);//Compares the lengthof two strings
    if(result==0)
    cout<<"Strings are same"<<endl;
    else if(result>0)
    cout<<"The ascii value of the character of str after 1st mismatch is more than that of str2 with ascii difference:"<<result<<endl;
    else
    cout<<"The ascii value of the character of str after 1st mismatch is less than that of str2 with ascii difference:"<<result<<endl;*/
    
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
    
 /*   //Implementation of strstr function
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
*/
    return 0;
}
