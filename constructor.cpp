#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int age;
    string adress;
public:

        student ()
        {

            name="unknown";
            age=20;
            adress="not applicable";

        }
    void display()
        {
            cout<<"Name:"<<name<<endl<<"Age : "<<age<<endl<<"Adress:"<<adress<<endl<<endl;
        }
    student(string a,int b)
    {
        name=a;
        age=b;
        adress="not applicable";
    }
    student(string a,int b,string c)
    {
        name=a;
        age=b;
        adress=c;
    }
};
     int main()
{
    student s,p("salin",20),d("salin",20,"Dhaka");
    s.display();
    p.display();
    d.display();
    return 0;
}
