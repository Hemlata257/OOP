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
Complex operator*(Complex const &C)
{
    Complex R;
    R.real=(real)*C.real-(imaginary)*C.imaginary;
    R.imaginary=(real)*C.imaginary+(imaginary)*C.real;
    return R;

}
void print()
{
    cout<<real<<"+"<<imaginary<<"i";
}
};
int main ()
{
    Complex C1(4,5) ,C2(4,9);
    cout<<"first complex number:";
    C1.print();
    cout<<"\nsecond complex number:";
    C2.print();
    Complex C3(0,0);
    C3=C1*C2;
    cout<<"\nmultiplication of first and second complex number:";
    C3.print();
}
