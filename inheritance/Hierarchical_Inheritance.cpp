#include<iostream>
using namespace std;

class parent
{
public:

    void p()
    {
        cout<<"I'm Parent ,all children can access me"<<endl;
    }
};
class child1: public parent
{
public:

    void c1()
    {
        cout<<"I'm childrean 1"<<endl;
    }
};
class child2:public parent
{
public:

    void c2()
    {
        cout<<"I'm children 2"<<endl;
    }
};

int main()
{
    child1 ch1;
    ch1.p();
    ch1.c1();

    child2 ch2;
    ch2.p();
    ch2.c2();
    return 0;
}
