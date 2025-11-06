#include<iostream>
using namespace std;
class complex1
{
    float real,imag;
    public:
    void getdata();
    void putdata();
    complex1 sum(complex1 b);
};
void complex1::getdata()
{
    cout<<"enter image part";
    cin>>imag;
}
void complex1::putdata()
{
    if(imag>=0)
    cout<<real<<"+"<<imag<<"i";
else
cout<<real<<imag<<"i";
}
complex1 complex1::sum(complex1 b)
{
    complex1 temp;
    temp.real=real+b.real;
    temp.imag=imag+b.imag;
    return temp;
}
int main()
{
    complex1 x,y,z;
    x.getdata();
    y.getdata();
    z:x.sum(y);
    x.putdata();
    return 0;
}