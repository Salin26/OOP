#include<iostream>
#include<string>
using namespace std;

class ParkingSlot
{
public:
    string slotnumber;
    bool isoccupied;

    ParkingSlot(string s, bool i)
    {
        slotnumber=s;
        isoccupied=i;
    }
    void display()
    {
        cout<<"1.Slotnumber: "<<slotnumber<<endl;
        cout<<"2.Isoccupied: "<<isoccupied<<endl;
    }


};
int main()
{
    ParkingSlot p("101",1);
    p.display();
    
    return 0;

}
