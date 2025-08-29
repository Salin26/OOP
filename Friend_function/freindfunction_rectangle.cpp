#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class rectangle
{
    private :
    double radius;
    double centerpoint;

public:

   void rectangl(double r,double c )
    {
        radius=r;
        centerpoint=c;
    }

    friend float findArea (rectangle r);


};

float findArea(rectangle r) {
    return r.radius * r.centerpoint;
}

int main()
{
    rectangle d;
    d.rectangl(10,5);
    cout << "Area of Rectangle: " << findArea(d) << endl;

    return 0;
}

