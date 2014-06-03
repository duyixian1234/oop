#include <iostream>
#include <string>
#include "vector.h"
int main(int argc, char const *argv[])
{
    Vector<int> a;
    Vector<int> b(5);
    Vector<string> c(2);
    try{
        for (int i = 0; i < 5; b[i]=i++);
        cout<<b[2]<<endl;
        a.inflate(b.size());
        for (int i = 0; i < 5; a[i++]=5-b[i]);
        cout<<a[0]<<endl;
        cin>>c[0]>>c[1];
        cout<<c[0]<<endl;
        Vector<string> d(c);
        cout<<d[0]<<endl;
        cout<<d[1]<<endl;
    }
    catch(IndexOutofBounds &e){
        cout<<"IndexOutofBounds!\n";
    }
    return 0;
}
