#include<iostream>
#include<math.h>
using namespace std;
class Rectangle{
private:
float x1;
float x2;
float x3;
float x4;
float y1;
float y2;
float y3;
float y4;
float length;
float width;
public:
    Rectangle(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
    {
this->x1=x1;
this->x2=x2;
this->x3=x3;
this->x4=x4;
this->y1=y1;
this->y2=y2;
this->y3=y3;
this->y4=y4;
  setCoordinates(x1,x2,x3,x4,y1,y2,y3,y4);

    }

void setCoordinates(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
{
if((x1>0.0&&x1<=20.0)||(x2>0.0&&x2<=20.0)||(x3>0.0&&x3<=20.0)||(x4>0.0&&x4<=20.0)||(y1>0.0&&y1<=20.0)||(y2>0.0&&y2<=20.0)||(y3>0.0&&y3<=20.0)||(y4>0.0&&y4<=20.0))
{
float d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2))+sqrt(pow(x3-x2,2)+pow(y3-y2,2));
float d2=sqrt(pow(x3-x4,2)+pow(y3-y4,2))+sqrt(pow(x4-x1,2)+pow(y4-y1,2));
if(d1==d2)
{
cout<<"this is a rectangle"<<endl;
}
else
cout<<"this is not a rectangle"<<endl;
}
}
void lengthWidth()
{
this->length=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
this->width=sqrt(pow(x4-x1,2)+pow(y4-y1,2));
if(width>length){
float temp= width;
width=length;
length=temp;
}
cout<<"Length is "<<length<<endl;
cout<<"Width is "<<width<<endl;
}
void Perimeter()
{
float perimeter=2.0*(length+width);
cout<<"Perimeter is "<<perimeter<<endl;

}
void Area()
{
float area=length*width;
cout<<"Area is "<<area<<endl;
}
void checkSquare()
{
if(length==width){
cout<<"this rectangle is a square"<<endl;
}
else
cout<<"this is not a square"<<endl;
}

void setPerimeterCharacter()
{

             cout<<"-";

}
void draw()
{
    int i,j;
    for(i=1;i<=25;i++)
    {



            for(j=1;j<=25;j++)
            {

             if(j>=x1&&j<x2)
             {
                 if(i==y1||i==(y4-1))
                    setPerimeterCharacter();
                    else
                        cout<<"";
             }
             if(i>y1&&i<(y4-1))
             {
                 if(j==x1||j==(x2-1))
                    setPerimeterCharacter();
                    else
                    cout<<"";
             }
           if(j>x1&&j<(x2-1)&&i>y1&&i<(y4-1))
             {
                 setFillCharacter();
             }
             cout<<" ";
            }







 cout<<"\n";
         }


}
void setFillCharacter()
{
cout<<"*";
}
};

int main(){
cout<<"For r1 coordinates"<<endl;
 Rectangle r1(10,20,20,10,10,10,20,20);
r1.lengthWidth();
r1.Perimeter();
r1.Area();
r1.checkSquare();
r1.draw();
}

