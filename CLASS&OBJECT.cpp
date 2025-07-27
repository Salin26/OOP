#include<iostream>
#include<string>
using namespace std;
class myclass{
  public:
    string brand ;
    string mystring;
};

int main()
{
    myclass myobject;
    myobject.mynum=15;
    myobject.mystring="i love github";
    cout<<myobject.mynum<<endl;
    cout<< myobject.mystring<<endl;
}
