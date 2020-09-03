#include<iostream>
using namespace std;
class Invoice
{
    string number;
    string description;
    int quantity;
    int price;
    int amount;
public:
    Invoice(string n="####",string d="####", int p =0, int i=0)
    {
        number=n;
        description=d;
        quantity=i;
        price=p;
    }
    void setNumber(string n )
    {
        number=n;
    }
    void setDescription(string d)
    {
        description=d;
    }
    void setQuantity(int i)
    {
        quantity=i;
    }
    void setPrice(int p)
    {
        price=p;
    }
    string getNumber()
    {
        return number;
    }
    string getDescription()
    {
        return description;
    }
    int getQuantity()
    {
        return quantity;
    }
    int getPrice()
    {
        return price;
    }
    int getInvoiceAmount()
    {
        if(quantity<0||price<0)
        {
            quantity=0;
            price=0;
        }
        else
       amount=price*quantity;
       return amount;
    }
};
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
