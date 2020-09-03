#include<iostream>
using namespace std;
int main()
{
    int arr[9999],i,j;
    for(i=0;i<9999;i++)
    {
        arr[i]=1;
    }
    for(i=2;i<9999;i++)
    {
        if(arr[i]==1)
        {

        for(j=i+1;j<9999;j++)
        {
            if(j%i==0)
            {
                arr[j]=0;
            }
        }
        }
        }
     for(i=2;i<9999;i++)
    {
        if(arr[i]==1)
            cout<<i<<endl;
    }
}
