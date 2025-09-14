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

class mother
{
public:
    void m()
    {
        cout<<"I'm mother"<<endl;
    }
} ;

class son:public mother,public father
{
public:
    void s()
    {
        cout<<"I'm Son"<<endl;
    }
};

int main()
{
    son so;
    so.gf();
    so.f();
    so.m();
    return 0;
}
