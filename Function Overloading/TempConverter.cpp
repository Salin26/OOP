#include<iostream>

using namespace std;

class temperature
{
public:
    double conv(double c)
    {
        return (c * 9 / 5) + 32;
    }
    double conv(int f)
    {
        return (f - 32) * 5 / 9.0;
    }
};

int main()
{
    temperature t;
    double c=25;
    int f=77;

    cout << c << "°C = " << t.conv(c)<< "°F" <<endl;
    cout << f << "°F = " << t.conv(f) << "°C"<<endl;
    return 0;
}
