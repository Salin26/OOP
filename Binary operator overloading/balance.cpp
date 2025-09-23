#include<iostream>
using namespace std;

class customer
{
    int balance;
public:
    customer (int b=0)
    {
        balance=b;
    }
    void display()
    {
        cout<<balance<<endl;
    }
    customer operator-(int amount)
    {
        customer e;
        if(amount<=balance)
            e.balance=balance-amount;
        else
        {
            cout<<"insufficient balance";
        }
        return e;
    }

};
int main()
{
    customer e1(10000);
    e1.display();

    customer e2=e1-1500;

    e2.display();
    return 0;
}
