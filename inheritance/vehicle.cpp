#include<iostream>
#include<string>
using namespace std;

class vehicle
{
protected :
    double speed;
    float wheel;
};

class car : public vehicle
{
private:
    int door;

public:
    car( double s,float w,int d)
    {
        speed=s;
        wheel=w;
        door=d;

    }
    void display()
    {
        cout<<"Speed :"<<speed<<endl;
        cout<<"Wheel:"<<wheel<<endl;
        cout<<"Door :"<<door<<endl;
    }
};

int main()
{
    car c(101.22,4,4);
    c.display();
    return 0;
}
