#include<iostream>
using namespace std;

double area (double radius)
{
    return 3.1416*radius*radius;
}
double area(double length, double width)
{
    return length*width;
}
double area (int base, int height)
{
    return 0.5*base*height;
}

int main()
{
    cout<<"Area of Circle :"<<area(5.00)<<endl;
    cout<<"Area of Rectangle :"<<area(3.0,6.0)<<endl;
    cout<<"Area of Triangle :"<<area(10.0,7.0)<<endl;
    return 0;
}
