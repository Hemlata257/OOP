#include<iostream>
using namespace std;
class Account{
private:
int balance;

public:
Account(int balance)
{
if(balance>=0)
this->balance=balance;
else
{
this->balance=0;
cout<<"initial balance was invalid\n";
}
}
void Credit(int amount)
{
balance+=amount;
}
void Debit(int amount)
{
if(amount>balance)
{
cout<<"Debit amount exceeded the balance amount\n";
}
else{
balance-=amount;
}
}
int getBalance()
{
return balance;
}
};


int main()
{
    Account a1(-200);
    Account a2(200);
int currentBalance;
a1.Credit(5000);
a1.Debit(4000);
currentBalance=a1.getBalance();
cout<<"current balance in account 1 is  "<<currentBalance<<endl;
a2.Credit(5000);
a2.Debit(8000);
currentBalance=a2.getBalance();
cout<<"current balance in account 2 is "<<currentBalance<<endl;

}
