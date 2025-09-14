#include<iostream>
using namespace std;

class bankaccount
{
protected :

    double balance;
};

class savingsaccount:public bankaccount
{
private :
    float interest;

public:
    savingsaccount(double b,float i)
    {
        balance=b;
        interest=i;
    }
    void display()
    {
        cout<<"Balance:"<<balance<<endl;
        cout<<"Interest Rate:"<<interest<<"%"<<endl;
    }
};

int main()
{
    savingsaccount s(5000.0,3.5);
    s.display();
    return 0;
}
