#include<bits/stdc++.h>
using namespace std;

class product
{
public:
    string id;
    string name;
    string price;
    int quantity;

    product(string pid,string pnam,string ppri,int pquan)
    {
        id = pid;
        name = pnam;
        price = ppri;
        quantity = pquan;
    }
    void display()
    {
        cout<<"ID :"<<id<<endl<<"NAME :"<<name<<endl<<"Price :"<<price<<endl<<"Quantity :"<<quantity<<endl;
    }
    void update(int updatequantity)
    {
        quantity=updatequantity;
    }

};
int main()
{
    product newproduct("P001","Smartphone","499.99$",10);

    newproduct.display();

    cout<<"------------------"<<endl;

    newproduct.update(5);

    newproduct.display();

    return 0;

}
