/*In a payroll system, bonuses are added to employees&#39; salaries. Create a class Employee
that holds an employee&#39;s name and salary. Overload the + operator to add a bonus amount
to an employee&#39;s salary.*/
#include<iostream>
using namespace std;

class employee
{
    string name;
    double salary;

public:
    employee(string n="",double s=0)
    {
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;

    }
    employee operator+(double bonus)
    {
        employee temp;
        temp.name=name;
        temp.salary=salary+bonus;
        return temp;
    }
};
int main()
{
    employee emp1("Salin",5000);

    emp1.display();

    employee em2=emp1+1500;

    em2.display();
    return 0;
}
