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
    int operator==(Complex &C)
    {
        int flag;
    if(real==C.real&&imaginary==C.imaginary)
        flag=1;
    else
        flag=0;
    return flag;
    }
     int operator!=(Complex &C)
    {
        int flag;
    if(real!=C.real&&imaginary!=C.imaginary)
        flag=1;
    else
        flag=0;
    return flag;
    }
    void print()
{
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}
};
int main()
{
    Complex C1(4,2),C2(3,2),C3(4,2);
    cout<<"first complex number is"<<endl;
    C1.print();
    cout<<"second complex number is"<<endl;
    C2.print();
    cout<<"third complex number is"<<endl;
    C3.print();
    if(C1==C3)
        cout<<"C1 and C3 are equal"<<endl;
        else
              cout<<"C1 and C3 are not equal"<<endl;
    if(C2!=C3)
        cout<<"C2 and C3 are not equal"<<endl;
    else
          cout<<"C2 and C3 are not equal"<<endl;
}
