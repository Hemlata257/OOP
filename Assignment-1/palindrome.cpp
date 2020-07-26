#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[20];
int i,l,flag=0;
cout<<"enter a string";
cin>>str;
l=strlen(str);
cout<<l;
for(i=0;i<l/2;i++)
{

if(str[i]!=str[l-i-1])
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<"string is  a palindrome";
}

else
{
cout<<"string is not a palindrome";
}


}
