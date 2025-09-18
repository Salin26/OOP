#include<iostream>
using namespace std;

class vector
{
private:
    double x,y;

public:
    vector(double a,double b): x(a),y(b) {}


    void display()
    {
        cout<<"x="<<x<<","<<"y="<<y<<endl;
    }
    vector operator -()
    {
        return vector (-x,-y);
    }
};

int main()
{
    vector f(10,5);
    f.display();

    vector of=-f;
    of.display();
    return 0;
}

