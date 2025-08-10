#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    double c,d,e,f,g, total_price;
    cout<<"Enter the prices of two items :";
    cin>>a>>b;

    cout<<"Enter quantities :";
    cin>>c>>d;
    e=a*c;
    f=b*d;
    g=e+f;

    total_price=g+(g*10/100);
    cout << fixed << setprecision(2);
    cout<<"total price(including 10% VAT :"<< total_price;
    return 0;

}
