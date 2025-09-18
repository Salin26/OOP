#include<iostream>
#include<string>
using namespace std;
class temp
{
private:
    double celcius;
public:
    temp(double cel)
    {
        celcius=cel;
    }
    void display()
    {
        cout<<"The celcius temperature is: "<<celcius<<endl;
    }
    double operator -()
    {
        return (celcius*9.0/5.0)+32;
    }
};
int main()
{
    temp x(100);
    x.display();
    double f=-x;
    cout<<"Temperature in Fahrenheit : "<<f<<endl;
    return 0;
}
