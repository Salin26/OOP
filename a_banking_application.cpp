#include<iostream>
using namespace std;

class Account
{
public:
    string name;
    int  number;
    int balance;

    Account(string na,int nu,int ba)
    {
        name=na;
        number=nu;
        balance=ba;
    }
    void info()
    {
        cout<<"Name :"<<name<<endl<<"Number :"<<number<<endl<<"Balance :"<<balance<<endl;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }
};
int main()
{
    Account myaccount("John Doe",123456,1000);

    myaccount.info();
    cout << "-------------------" << endl;

    myaccount.deposit(500);
    myaccount.withdraw(200);


    myaccount.info();

    return 0;
}
