#include<iostream>
using namespace std;
void printArray(int arr[],int i,int n)
{
    if(i==n)
    return;
   else{
     cout<<arr[i]<<'\t';
     return printArray(arr,i+1,n);
   }

}
int main(){
int arr[50],i,n;
cout<<"enter size of the array";
cin>>n;
cout<<"enter elements of the array";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"elements are"<<endl;
i=0;
printArray(arr,i,n);

}
