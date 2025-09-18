/*A robot’s energy consumption is monitored through a Battery class. Every action the
robot performs consumes some energy. Overload the unary minus (-) operator to simulate
an energy-consuming action, adjusting the battery level accordingly.*/
#include<iostream>
using namespace std;

class battery
{
private :
    int level;
public:
    battery(int b):level(b) {}

    battery operator-()
    {
        if(level>0)
        {
            --level;
            if(level<0)
                level=0;
        }
        else
        {
            cout<<"Battery Empty"<<endl;
        }
        return *this;
    }
    void display()
    {
        cout<<"Battery Level:"<<level<<endl;

    }
};
int main()
{
    battery ba(100);
    ba.display();

    battery oba=-ba;
    oba.display();


    battery oba1=-ba;
    oba1.display();
    return 0;


}
