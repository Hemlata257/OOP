#include<iostream>
#include<math.h>
using namespace std;
class sphere{
float radius;
float volume;
public:
sphere(float r=0.0)
{
radius=r;
}
void setRadius(float r)
{
    radius=r;
}
float sphereVolume();

void print()
{
    cout<<"the radius of the sphere is"<<radius<<endl;
    cout<<"the volume of sphere is "<<volume;
}
};
inline float sphere::sphereVolume()
{
    volume=(4.0/3.0)*3.14159*pow(radius,3);
    return volume;
}
int main()
{
    sphere S;
    float r;
    cout<<"enter the radius of the sphere"<<endl;
    cin>>r;
    S.setRadius(r);
    S.sphereVolume();
    S.print();


}
