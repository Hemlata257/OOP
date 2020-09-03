#include<iostream>
using namespace std;
#include"Invoice.h"
int main()
{
    int q;
Invoice I1("b234","book",999,1),I2("A254","bottle",240,1);
cout<<"enter the quantity of books";
cin>>q;
I1.setQuantity(q);
cout<<"enter the quantity of bottles";
cin>>q;
I2.setQuantity(q);
cout<<"Number of item :"<<endl;
cout<<I1.getNumber()<<endl;
cout<<"Description of item :"<<endl;
cout<<I1.getDescription()<<endl;
cout<<"price per item :"<<endl;
cout<<I1.getPrice()<<endl;
cout<<"Quantity of item :"<<endl;
cout<<I1.getQuantity()<<endl;
cout<<"Amount of the item :"<<endl;
cout<<I1.getInvoiceAmount()<<endl;
cout<<"Number of item :"<<endl;
cout<<I1.getNumber()<<endl;
cout<<"Description of item :"<<endl;
cout<<I1.getDescription()<<endl;
cout<<"Price of item :"<<endl;
cout<<I1.getPrice()<<endl;
cout<<"Quantity of item :"<<endl;
cout<<I1.getQuantity()<<endl;
cout<<"Amount of the item :"<<endl;
cout<<I2.getInvoiceAmount();



}
