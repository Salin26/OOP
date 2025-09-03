#include<iostream>
using namespace std;

class person
{
protected :
    string name;
};
class student : public person
{
private :
    int id;
public:
    student ()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter id : ";
        cin>>id;
    }
    
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Id : "<<id;
    }
};

int main()
{
    student s;
    s.display();

            return 0;
}
