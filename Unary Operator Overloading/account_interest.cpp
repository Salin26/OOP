#include<iostream>
using namespace std;
class account
{
private :
    double balance;
    double rate;

public:
    account(double bal,double rat)
    {
        balance=bal;
        rate=rat;
    }
    void display()
    {
        cout<<"Current Ballance :"<<balance<<endl;
    }
    void operator++()
    {
        balance+=balance*rate/100;
    }
};

int main()
{
    account ac(1000,1.5);
    ac.display();

    ++ac;
    ac.display();

    ++ac;
    ac.display();

    return 0;
}
