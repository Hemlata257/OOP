#include<iostream>
using namespace std;
class Shape{
     public:
Shape()
{
    cout<<"This is a shape"<<endl;
}

};
class TwoDShape : public Shape
{
int l,b;
public:
    TwoDShape(int l=0,int b=0)
    {
        cout<<"This is a 2-D shape"<<endl;
        this->l=l;
        this->b=b;
    }
    void CalculateArea()
    {
        cout<<"Area:"<<l*b<<endl;
    }
    void CalculatePerimeter()
    {
        cout<<"Perimeter :"<<2*(l+b)<<endl;
    }
};
class Rectangle : public TwoDShape{
public:
    Rectangle(int l,int b): TwoDShape(l,b)
    {
        cout<<"This is a Rectangle"<<endl;
    }
};
class Square : public TwoDShape{
public:
    Square(int s ):TwoDShape(s,s)
    {
        cout<<"This is a Square"<<endl;
    }
};
class ThreeDShape:public Shape
{ int r,h;
public:
    ThreeDShape(int r=0,int h=0)
    {
        cout<<"This is a 3-D shape"<<endl;
        this->r=r;
        this->h=h;
    }
    int getr()
    {
        return r;
    }
    int geth()
    {
        return h;
    }

};
class Cylinder : public ThreeDShape{
public:
    Cylinder(int r,int h): ThreeDShape(r,h)
    {
        cout<<"This is a Cylinder "<<endl;
    }
      CalculateVolume()
      {
          cout<<"Volume"<<3.14*getr()*getr()*geth()<<endl;
      }
};class Sphere : public ThreeDShape{
public:
    Sphere(int r):ThreeDShape(r,r)
    {
        cout<<"This is a Sphere"<<endl;
    }
      CalculateVolume()
      {
          cout<<1.33*3.14*getr()*getr()*getr()<<endl;
      }
};
int main()
{
Square S(20);
S.CalculateArea();
Cylinder C(20,5);
C.CalculateVolume();
}
