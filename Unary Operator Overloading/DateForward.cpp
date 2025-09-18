/*In a calendar scheduling app, dates are managed using a Date class. Overload the unary
plus (+) operator to move the current date forward by one day, allowing users to navigate
their schedules more easily.*/
#include<iostream>
using namespace std;

class date
{
private :
    int day,month,year;

public:

    date(int d,int m,int y): day(d), month(m), year(y) {}

    date operator+()
    {
        int d= day +1;
        int m=month;
        int y=year;

        if(d>30)
        {
            d=1;
            m++;
            if(m>12)
            {
                m=1;
                y++;
            }
        }
        return date(d,m,y);

    }
    void display()
    {
        cout<<"DATE:"<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    date d(26,11,2025);
    d.display();

    date od=+d;
    od.display();

    return 0;
}
