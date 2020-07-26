#include<iostream>
using namespace std;
int main()
{
int arr[50],n,i,j;
cout<<"enter number if elements";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
//insertion sort
for(i=1;i<n;i++)
{
int temp=arr[i];
j=i-1;
while(j>=0&&arr[j]>temp)
{

    arr[j+1]=arr[j];
    j=j-1;
}
arr[j+1]=temp;

}
//sorted array
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}

}
