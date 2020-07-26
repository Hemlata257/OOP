#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter a number";
cin>>n;
for(i=2;i<n;i++)
{
if(n%i==0)
{
break;
}
}
if(n==i)
cout<<"number is prime";
else
cout<<"number is not prime";

}
