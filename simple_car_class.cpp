#include<iostream>
#include<string>
using namespace std;

class mycar
{
public:
    string brandname;
    string model;
    int year;
};
int main()
{
    mycar car1;

    car1.brandname="audi";
    car1.model="X5";
    car1.year=1995;

    mycar car2;

    car2.brandname="Ford";
    car2.model="mustang";
    car2.year=1969;


    cout << car1.brandname << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brandname<< " " << car2.model << " " << car2.year << "\n";





}
