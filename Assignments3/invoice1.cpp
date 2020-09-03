#include<iostream>
using namespace std;
#include"Invoice.h"
Invoice::Invoice(string n="####",string d="####", int p =0, int i=0){
         number=n;
        description=d;
        quantity=i;
        price=p;
}
 void Invoice::setNumber(string n )
    {
        number=n;
    }
    void Invoice::setDescription(string d)
    {
        description=d;
    }
    void Invoice::setQuantity(int i)
    {
        quantity=i;
    }
    void Invoice::setPrice(int p)
    {
        price=p;
    }
    string Invoice::getNumber()
    {
        return number;
    }
    string Invoice::getDescription()
    {
        return description;
    }
    int Invoice::getQuantity()
    {
        return quantity;
    }
    int Invoice::getPrice()
    {
        return price;
    }
    int Invoice::getInvoiceAmount()
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
