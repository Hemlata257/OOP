#include<iostream>
using namespace std;
class Vehicle{
    int L;
    public:
        Vehicle(int L)
        {
            this->L=L;
            cout<<"Total Quantity "<<L<<endl;
        }
Vehicle()
{
    cout<<"It is a vehicle"<<endl;
}
~Vehicle()
{
    cout<<"Vehicle destructor called"<<endl;
}

};
class TwoWheeler : virtual public Vehicle
{
    public:
        TwoWheeler(int L): Vehicle(L)
        {
            cout<<"Quantity used by Two wheeler in 1 week "<<(float)L/2<<endl;
        }

~TwoWheeler()
{
    cout<<"TwoWheeler destructor called"<<endl;
}

};
class FourWheeler :virtual public Vehicle
{
    public:
        FourWheeler(int L): Vehicle(L)
        {
            cout<<"Quantity used by Four wheeler in 1 week "<<L<<endl;
        }

~FourWheeler()
{
    cout<<"FourWheeler destructor called"<<endl;
}

};
class Petrol : public TwoWheeler, public FourWheeler
{
    public:
        Petrol(int L):TwoWheeler(L),FourWheeler(L),Vehicle(L)
        {
            cout<<"Quantity of fuel filled "<<L<<endl;
        }

~Petrol()
{
    cout<<"Petrol destructor called"<<endl;
}

};
int main()
{

    Petrol P(5);

}
