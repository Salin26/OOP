#include<iostream>
using namespace std;

class math
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b,double c)
    {
        return a+b+c;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    math m;

    cout<<m.add(2,3)<<endl;
    cout<<m.add(2.3,3.5,4.5)<<endl;
    cout<<m.add(2,5,6)<<endl;
    return 0;
}
