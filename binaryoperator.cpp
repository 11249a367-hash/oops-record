#include <iostream>
using namespace std;
class complex1
{
    double real;
    double imag;
    public:
    complex1 () {}
    complex1 (double,double);
    complex1 operator+(complex1);
    void print();
};
complex1::complex1(double r, double i)
{
    real = r;
    imag = i;
}
complex1 complex1::operator+
(complex1 param)
{
    complex1 temp;
    temp.real = real + param.real;
    temp.imag = imag + param.imag;
    return(temp);
}
void complex1::print()
{
    cout <<real<<"+"<<imag<<endl;
}
int main()
{
    complex1 c1(3.1,1.5);
    complex1 c2(1.2,2.2);
    complex1 c3;
    c3=c1+c2;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}