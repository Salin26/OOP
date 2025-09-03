#include<iostream>
#include<string>

using namespace std;

class animal
{
protected:
    string name;

};

class cat: public animal
{
private:
    int number;
public:
    cat()
    {
        cout<<"Enter Cat Name: ";
        cin>>name;
        cout<<"Enter Number of lives: ";
        cin>>number;

    }

    void display()
    {
        cout<<"Cat Name: "<<name<<endl;
        cout<< "Number of lives "<<number<<endl;
    }
};

int main()
{
    cat b;
    b.display();
    return 0;
}
