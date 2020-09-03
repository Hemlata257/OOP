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
    Invoice(string ,string ,int ,int);
     void setNumber(string  );
      void setDescription(string  );
       void setPrice(int );
        void setQuantity(int );
        string getNumber();
        string getDescription();
        int getPrice();
  int getQuantity();
  int getInvoiceAmount();
      };

