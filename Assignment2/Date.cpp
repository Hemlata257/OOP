#include<iostream>
using namespace std;
class Date{
private:
int month;
int year;
int day;
public:
Date(int day,int month, int year)
{
this->day=day;
this->year=year;
if(month>=12&&month<=1)
{
this->month=month;
}
else{
this->month=1;
}
}
void setDay(int day)
{
this->day=day;
}
void setMonth(int month)
{
if(month>=12&&month<=1)
{
this->month=month;
}
else{
this->month=1;
}
}
void setYear(int year)
{
this->year=year;
}
int getMonth(){
return month;
}
int getDay(){
return day;
}
int getYear(){
return year;
}
void displayDate()
{

   cout<<month<<"/"<<day<<"/"<<year<<endl;
}
};

int main()
{
Date d1(29,90,2000);
 cout<<"The date for day 1 is"<<endl;
d1.displayDate();
Date d2(12,9,1995);
d2.setMonth(60);
int month=d2.getMonth();
cout<<"Month is"<<month<<endl;
d2.setYear(2001);
int year=d2.getYear();
cout<<"Year is"<<year<<endl;
d2.setDay(22);
int day=d2.getDay();
cout<<"Day is"<<day<<endl;
cout<<"The date for day 1 is"<<endl;
d2.displayDate();


}












