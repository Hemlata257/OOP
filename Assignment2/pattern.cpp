#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,k,x;
    cout<<"enter rows and columns for square\n";
    cin>>n>>m;
    cout<<"\nsquare: \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j==1||j==m||i==1||i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";
    }
    cout<<"enter rows and columns for oval\n";
    cin>>n>>m;
     cout<<"oval\n";


     for(i=1;i<=n;i++)
     {
        if(i==1||i==n)
        {
         for(j=1;j<=m;j++)
         {
             if(m%2!=0)
             {
                  if(j>=m/2&&j<=((m/2)+2))
                cout<<"*";
                 else
                cout<<" ";
             }
            else{
                if(j>=m/2-1&&j<=(m/2)+2)
                     cout<<"*";
                 else
                cout<<" ";
            }

         }
         cout<<"\n";
        }
        if(i==2||i==(n-1))
        {
            for(j=1;j<=m;j++)
            {
                if(j==2||j==m-1)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<"\n";

        }
        if(i>=2&&i<=(n-2))
        {
            for(j=1;j<=m;j++)
            {
                if(j==1||j==m)
                    cout<<"*";
                else
                    cout<<" ";

            }
            cout<<"\n";
        }
         }
         cout<<"enter rows and columns for arrow\n";
    cin>>n>>m;
         cout<<"\narrow\n";
         x=m;
         for(i=1;i<=n;i++)
         {if(i<=(n/3))
         {
              for(j=1;j<=m-i;j++)
             {
                 cout<<" ";
             }
             for(j=1;j<=2*i-1;j++)
             {
                 cout<<"*";
             }

          cout<<"\n";
         }
            else{
             for(j=1;j<=(m);j++)
             {
                 if(j==m)
                    cout<<"*";
                 else
                    cout<<" ";
             }
             cout<<"\n";
         }
         }

         cout<<"diamond\n";
         cout<<"enter rows for diamond\n";
    cin>>m;
         for(i=0;i<m/2+1;i++)
         {
                 for(j=0;j<=m/2;j++)
                 {
                     if(i+j==m/2)
                        cout<<"*";
                     else{
                        cout<<" ";
                     }
                 }
                 for(j=0;j<m/2;j++)
                 {
                     if(i==j+1)
                        cout<<"*";
                     else
                        cout<<" ";
                 }
                 cout<<"\n";
             }
              for(i=0;i<m/2+1;i++)
         {

                 for(j=0;j<=m/2;j++)
                 {
                     if(j==i+1)
                        cout<<"*";
                     else{
                        cout<<" ";
                     }
                 }
                 for(j=0;j<m/2;j++)
                 {
                     if(i+j==(m/2)-2)
                        cout<<"*";
                     else
                        cout<<" ";
                 }
                 cout<<"\n";
             }




}


















