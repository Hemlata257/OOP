#include<iostream>
using namespace std;
int main()
{
int arr[50],n,sec_max,sec_min,i,j;
cout<<"enter number of elements in array";
cin>>n;
cout<<"enter elements of array";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
int temp =arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<"the second smallest nummber is:"<<arr[1];
cout<<"the second largest is:"<<arr[n-2];
}
