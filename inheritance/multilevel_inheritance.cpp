#include<iostream>
using namespace std;

class grandfather
{
public:

    void gf()
    {
        cout<<"I'm Grandfather"<<endl;
    }

};

class father:public grandfather
{
public:
    void f()
    {
        cout<<"I'm Father"<<endl;
    }
};
class son:public father
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
