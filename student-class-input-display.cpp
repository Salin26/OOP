#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
    void input(int x,double y)
    {
        id=x;
        gpa=y;
    }
};

int main()
{
    student salin,joya;

    salin.input(24203070,3.46);
    salin.display();

    joya.input(24203073,3.80);
    joya.display();

    return 0;

}
