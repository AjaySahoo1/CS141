#include <iostream>
using namespace std;
int contains(char* p,char c)
{
    char t='\0';
    for(int i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)==c)
        t=*(p+i);
    }
    if(t!='\0')
    return 1;
    else
    return 0;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<<endl;
    cin>>size;
    char ar[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    char c;
    cout<<"Enter the you want to find in the array"<<endl;
    cin>>c;
    char* p=&ar[0];
    cout<<contains(p,c);
    return 0;
}
