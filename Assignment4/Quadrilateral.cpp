#include<iostream>
using namespace std;
class Quadrilateral {
int l1,l2,b1,b2,h;
public:
    Quadrilateral(int l1=0,int b1=0,int h=0, int l2=0, int b2=0)
    {
        cout<<"This is a quadrilateral"<<endl;
         this->l1=l1;
        this->b1=b1;
        this->h=h;
        this->l2=l2;
        this->b2=b2;

    }
    int getl1()
    {
        return l1;
    }
     int geth()
    {
        return h;
    }
    int getb1()
    {
        return b1;
    }
     int getl2()
    {
        return l2;
    }
    int getb2()
    {
        return b2;
    }



};
class Trapezium : public Quadrilateral {

public:
    Trapezium(int l1,int b1,int h, int l2, int b2): Quadrilateral(l1,b1, h, l2, b2)
    {
        cout<<"This is a Trapezium"<<endl;
    }
    void area()
    {
        cout<<"Area :"<<0.5*(getb1()+getb2())*geth()<<endl;
    }
    void Perimeter()
    {
        cout<<"Perimeter :"<<getl1()+getl2()+getb1()+getb2()<<endl;    }

};
class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int l,int b, int h): Quadrilateral(l,b,h)
    {
        cout<<"This is a  Parallelogram"<<endl;
    }
    void Perimeter()
    {
        cout<<"Perimeter :"<<2*(getl1()+getb1())<<endl;
    }
    void area ()
    {
        cout<<"Area :"<<getb1()*geth()<<endl;
    }

};
class Rectangle : public Parallelogram {
public:
    Rectangle(int l,int b): Parallelogram(l,b,0)
    {
        cout<<"This is a  Rectangle"<<endl;
    }
    void area()
    {

        cout<<"Area: "<<getl1()*getb1()<<endl;
    }


};
class Square : public Rectangle{
    int s;
public:
    Square (int s):Rectangle( s, s)
    {
        cout<<"This is a  Square "<<endl;
    }

};
int main()
{
    Square S(30);
    S.area();
    S.Perimeter();
    Rectangle R(3,4);
    R.area();
    R.Perimeter();
    Trapezium T(8,3,7,10,11);
    T.area();
    T.Perimeter();
    Parallelogram P(13,27,12);
    P.area();
    P.Perimeter();
}
