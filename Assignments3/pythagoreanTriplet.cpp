#include<iostream>
using namespace std;
int main()
{
int side1=1,side2=1,H=1;
for(H=1;H<=500;H++)
{
    for(side1=1;side1<=500;side1++)
    {
        for(side2=1;side2<=500;side2++)
        {
            if(H*H==(side1*side1+side2*side2))
            {
                cout<<"H :"<<H<<" "<<"side1 :"<<side1<<" "<<"side2 :"<<side2<<endl;
            }

        }
    }
}

}
