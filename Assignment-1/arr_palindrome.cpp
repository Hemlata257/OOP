#include<iostream>
using namespace std;
int main()
{
int a[50],n,i,flag=0;
cout<<"enter number of elements";
cin>>n;
cout<<"enter elements of the array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<=n/2;i++)
{
if(a[i]!=a[n-i-1])
{
flag=1;
break;
}
}
if(flag==0)
cout<<"array is a palindrome";
else
cout<<"array is not a palindrome";
}
