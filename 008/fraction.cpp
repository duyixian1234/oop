#include <iostream>
#include <string>
#include "fraction.h"
using namespace std;
string Fraction::toString(){
    char s[21];
    sprintf(s,"%d/%d",numtator,denominator);
    string r(s);
    return r;
}

bool Fraction::operator>(const Fraction &a) const {
    if(numtator*a.denominator>denominator*a.numtator)return 1;
    else return 0;
}
bool Fraction::operator==(const Fraction &a) const {
    if(numtator*a.denominator==denominator*a.numtator)return 1;
    else return 0;
}
bool Fraction::operator>=(const Fraction &a) const {
    return (*this>a||*this==a);
}
bool Fraction::operator<(const Fraction &a) const {
    return !(*this>a||*this==a);
}
bool Fraction::operator<=(const Fraction &a) const {
    return !(*this>a);
}
bool Fraction::operator!=(const Fraction &a) const {
    return !(*this==a);
}

const Fraction Fraction::operator-()const{
    return Fraction(-numtator,denominator);
}

const Fraction operator+(const Fraction &l,const Fraction &r){
    return Fraction(l.numtator*r.denominator+l.denominator*r.numtator,l.denominator*r.denominator);
}

const Fraction operator-(const Fraction &l,const Fraction &r){
    return Fraction(l.numtator*r.denominator-l.denominator*r.numtator,l.denominator*r.denominator);
}

const Fraction operator*(const Fraction &l,const Fraction &r){
    return Fraction(l.numtator*r.numtator,l.denominator*r.denominator);
}

const Fraction operator/(const Fraction &l,const Fraction &r){
    return Fraction(l.numtator*r.denominator,l.denominator*r.numtator);
}

Fraction::operator double(){
    return (double)numtator/denominator;
}

istream& operator>>(istream& is,Fraction &a){
    char ch;
    is>>a.numtator>>ch>>a.denominator;
    return is;
}

ostream& operator<<(ostream& os,const Fraction &a){
    os<<a.numtator<<'/'<<a.denominator;
    return os;
}

Fraction::~Fraction(){}
