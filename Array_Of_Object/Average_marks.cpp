//Write a program to print the roll number and average marks of 8 students in three
subjects (each out of 100). The marks are entered by the user and the roll numbers are
automatically assigned

#include<iostream>
#include<string>

using namespace std;

class student
{
    int roll;
    double marks1;
    double marks2;
    double marks3;

public:

    student(int r,double m1,double m2,double m3)
    {
        roll=r;
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }

    void display()
    {
        cout<<"Roll:"<<roll<<endl<<endl;
        cout<<"Average Marks ="<<(marks1+marks2+marks3)/3.0<<endl<<endl;
    }


};

int main()
{
    student s[]=
    {
        student(101,50,50,50),
        student(102,70,80,90),
        student(103,90,90,80),
        student(104,70,60,80),
        student(105,90,50,60),
        student(106,90,100,99),
        student(107,90,98,97),
        student(108,60,50,80)

    };

    for(int i=0;i<8;++i)
    {
        s[i].display();
    }
    return 0;

}
