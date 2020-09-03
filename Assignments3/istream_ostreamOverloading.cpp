#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int imaginary;

    public:
Complex(int r=0,int i=0)
{
    real=r;
    imaginary=i;
}
friend istream &operator>>(istream &obj ,Complex &C1);
friend ostream  &operator<<(ostream &obj ,Complex const &C1);

};
ostream &operator<<(ostream &obj ,Complex const &C1)
{
    obj<<C1.real<<"+"<<C1.imaginary<<"i"<<endl;
}
istream &operator>>(istream &obj ,Complex &C1)
{
      cout<<"enter real part";
    obj>>C1.real;
    cout<<"enter imaginary part";
    obj>>C1.imaginary;
}
int main()
{
    Complex C1,C2;
    cout<<"enter values of first complex number"<<endl;
    cin>>C1;
    cout<<"enter values of second complex number"<<endl;
    cin>>C2;
    cout<<"the first complex number is "<<endl;
    cout<<C1;
    cout<<"the second complex number is "<<endl;
    cout<<C2;


}
