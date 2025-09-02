#include<iostream>
#include<string>

using namespace std;

class employee
{
    string name;
    double salary;
    string date;

public:
    employee (string n,double s,string d)
    {
        name=n;
        salary=s;
        date=d;
    }

    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
        cout<<"Date oj joining :"<<date<<endl;
    }
};

int main()
{
    employee e[]=
    {
        employee("John Smith", 55000, "01/03/2020"),
        employee("Jane Doe", 60000, "15/07/2018"),
        employee("Alice Johnson", 75000, "23/05/2019"),
        employee("Bob Brown", 48000, "10/01/2021"),
        employee("Charlie Green", 62000, "11/11/2017"),
        employee("Diana White", 54000, "05/06/2020"),
        employee("Eve Black", 68000, "25/08/2016"),
        employee("Frank Harris", 50000, "12/12/2022"),
        employee("Grace Clark", 55000, "09/02/2019"),
        employee("Henry Adams", 72000, "04/04/2021")
    };
    for (int i = 0; i < 10; ++i)
    {
        e[i].display();
    }
    return 0;
}
