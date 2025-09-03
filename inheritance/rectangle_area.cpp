#include<iostream>
using namespace std;

class shape
{
protected :
    int width;
    int height;
};

class rectangle : public shape
{
private :
    float area;
    public:
    rectangle()
    {
        cout<<"Enter the width :";
        cin>>width;
        cout<<"Enter the height:";
        cin>>height;
    }
  void display()
  {
      cout<<"area :"<<height*width;

  }

};
int main()
{
    rectangle s;
    s.display();
}
