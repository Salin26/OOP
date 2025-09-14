#include<iostream>
using namespace std;

class mother
{
public:

    void gf()
    {
        cout<<"I'm Mother"<<endl;
    }

};

class father
{
public:
    void f()
    {
        cout<<"I'm Father"<<endl;
    }
};
class son:public father,public mother
{
public:
    void s()
    {
        cout<<"I'm Son"<<endl;
    }
};

int main()
{
    son c;
    c.gf();
    c.f();
    c.s();
    return 0;

}
