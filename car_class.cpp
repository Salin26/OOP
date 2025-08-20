#include<iostream>
#include <string>
using namespace std;
class car
{
public :
    string name;
    string model;
    int year;
    int milage;

    car(string n,string mo,int y,int mi)
    {
        name=n;
        model=mo;
        year=y;
        milage=mi;
    }
    void info()
    {
        cout<<"name : "<<name<<", model : "<<model<<" , year : "<<year<<", mileage :"<<milage<<endl;
    }
    void addmilage(int miles)
    {
        milage=miles+milage;
    }
    bool isluxury()
    {
        if (name== "BMW" ||name == "BUGATTI" ||name == "MERCEDES" )
        {
            return true;
        }
        return false;
    }
};
int main()
{
    car mycar("Toyota", "Camry",2021, 10000);

    mycar.info();

    mycar.addmilage(500);

    mycar.info();
    if(mycar.isluxury())
    {
        cout<<"It's a luxury car.";
    }
    else
    {
        cout<<"Not a luxury car.";
    }
    return 0 ;
}
