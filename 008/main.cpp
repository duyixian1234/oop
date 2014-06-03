#include <iostream>
#include "fraction.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Fraction a,b(1,2),c(b),d(-c),e(2,3);
    cout<<"a="<<a<<'\t'<<(double)a<<endl;
    cout<<"b="<<b<<'\t'<<(double)b<<endl;
    cout<<"c="<<c<<'\t'<<(double)c<<endl;
    cout<<"d="<<d<<'\t'<<(double)d<<endl;
    cout<<"e="<<e<<'\t'<<(double)e<<endl;
    cout<<"c+e="<<c+e<<endl;
    cout<<"c-e="<<c-e<<endl;
    cout<<"c*e="<<c*e<<endl;
    cout<<"c/e="<<c/e<<endl;
    cout<<"Please input a fraction such as '2/3'\n";
    cin>>d;
    cout<<d<<"\t"<<(double)d<<endl;
    return 0;
}
