#include<iostream>
using namespace std;

class product
{
private :
    string name;
    int stock;

public:
    product(string a,int b):name(a),stock(b) {}

    product operator--()
    {
        if(stock>0)
        {
            stock--;
        }
        else
        {
            cout<<"Out of stock;";
        }
        return *this;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Stock:"<<stock<<endl;
    }
};

int main()
{
    product p("Salin",3);
    p.display();

    --p;
    p.display();

    --p;
    p.display();

    --p;
    p.display();

    --p;
    p.display();

    --p;
    p.display();

    return 0;
}
