#include <iostream>
#include <string>
#include "vector.h"
int main(int argc, char const *argv[])
{
    Vector<int> a;
    Vector<int> b(5);
    for (int i = 0; i < 5; b[i]=i++);
    cout<<b[2]<<endl;
    a.inflate(b.size());
    for (int i = 0; i < 5; a[i++]=5-b[i]);
    cout<<a[0]<<endl;
    Vector<string> c(2);
    cin>>c[0]>>c[1];
    cout<<c[0]<<endl;
    Vector<string> d(c);
    cout<<d[0]<<endl;
    return 0;
}
