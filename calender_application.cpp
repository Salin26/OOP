#include<bits/stdc++.h>
using namespace std;

class event

{
public:
    string name;
    string date;
    string location;
    void info()
    {
        cout<<"SONG NAME :"<<name<<endl<<"DATE :"<<date<<endl<<"LOCATION :"<<location<<endl;
    }
};
int main()
{
    event myevent;

    myevent.name="Birthday Party";
    myevent.date="2023-08-15";
    myevent.location="Partk Plaza";

    myevent.info();

    return 0;
}
