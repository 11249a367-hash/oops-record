#include<iostream>
using namespace std;
class complex1
{
    float real,imag;
    public:
    void getdata()
    {
        cout<<"enter the real & imag";
        cin>>real>>imag;
    }
    void putdata()
    {
        if(imag>=0)
        cout<<real<<"+"<<imag<<"i"<<endl;
    else
    cout<<real<<"-"<<imag<<"i"<<endl;
    }
    void sum (complex1 A, complex1 B)
    {
        real=A.real+B.real;
        imag=A.imag+B.imag;
    }
};
int main()
{
   complex1 a,b,c;
    a.getdata();
    b.getdata();
    c.sum(a,b);
    a.putdata();
    b.putdata();
    c.putdata();
}