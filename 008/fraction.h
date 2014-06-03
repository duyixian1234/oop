#ifndef fraction_h
#define fraction_h
using namespace std;
class Fraction
{
public:
    Fraction():denominator(1),numtator(0){};
    Fraction(int a,int b):denominator(b),numtator(a){};
    Fraction(const Fraction &r):denominator(r.denominator),numtator(r.numtator){};
    bool operator>(const Fraction &a) const;
    bool operator==(const Fraction &a) const;
    bool operator>=(const Fraction &a) const ;
    bool operator<(const Fraction &a) const ;
    bool operator<=(const Fraction &a) const ;
    bool operator!=(const Fraction &a) const ;
    operator double();
    const Fraction operator-()const ;
    std::string toString();
    ~Fraction();
//private:
    int denominator,numtator;
};
const Fraction operator+(const Fraction &l,const Fraction &r);
const Fraction operator-(const Fraction &l,const Fraction &r);
const Fraction operator*(const Fraction &l,const Fraction &r);
const Fraction operator/(const Fraction &l,const Fraction &r);
istream& operator>>(istream& is,Fraction &a);
ostream& operator<<(ostream& os,const Fraction &a);
#endif
