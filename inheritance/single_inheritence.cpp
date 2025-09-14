#include<iostream>
using namespace std;

class parent
{
public:
    void show()
    {
        cout<<"I am parent "<<endl;
    }
};
class child:public parent
{
public:
    void show1()
    {
        cout<<"I am child";
    }
};
int main()
{
    child c;
    c.show();
    c.show1();
    return 0;
}
