#include<iostream>
using namespace std;
class Garage{
float charge;
float hours;
public:
Garage(float h=0.0,float c=0.0)
{
    charge=c;
    hours=h;
}
 void setHour(int h)
{
    hours=h;
}
void total(Garage g[])
{
    int i;
    for(i=0;i<3;i++)
    {
       charge+=g[i].charge;
       hours+=g[i].hours;
    }

}
float getHour()
{
    return hours;
}
float getCharge()
{
    return charge;
}
void calculateCharge()
{
    if(hours<=3.0)
        charge=2.0;
    else{
        charge=(0.5*hours)+2.0;
        if(charge>10.0)
            charge=10.0;
    }
}

};

int main()
{
    Garage G[3];
    int i;
    float h;
    for(i=0;i<3;i++)
    {
        cout<<"input hours of car "<<i+1<<" ";
        cin>>h;
        G[i].setHour(h);
        G[i].calculateCharge();
    }
    cout<<"Car   Hours  Charge"<<endl;
    for(i=0;i<3;i++)
    {
            cout<<i+1<<"     "<<G[i].getHour()<<"      "<<G[i].getCharge();
            cout<<endl;
    }
    Garage T;
    T.total(G);

    cout<<"Total"<<" ";
    cout<<T.getHour();
    cout<<"    "<<T.getCharge();

}
