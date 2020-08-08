#include<iostream>
using namespace std;
class Rectangle{
private:
float length;
float width;

public:
Rectangle()
{
this->length=1.0;
this->width=1.0;
}
void Perimeter()
{
float perimeter=2*(length+width);
cout<<"Perimeter is "<<perimeter<<endl;
}
void Area(){
 float area=length*width;
cout<<"Area is "<<area<<endl;
}
void setLength(float length)
{
if(length>=0.0&&length<=20.0)
this->length=length;
}
void setWidth(float width)
{
if(width>=0.0&&width<=20.0)
this->width=width;
}
float getLength()
{
return length;
}
float getWidth()
{
return width;
}

};

int main()
{
Rectangle R;
R.setLength(10);
R.setWidth(23);
int length=R.getLength();
int width=R.getWidth();
cout<<"The length is "<<length<<endl;
cout<<"The width is "<<width<<endl;
R.Perimeter();
R.Area();
}
