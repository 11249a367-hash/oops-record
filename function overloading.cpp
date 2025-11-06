#include<iostream>
using namespace std;
class calculator
{
    public:
    int add(int a,int b)
    {
        return(a+b);
    }
    int add(int a,int b,int c)
    {
        return(a+b+c);
    }
};
int main()
{
    calculator c;
    int result=c.add(10,20);
    cout<<"the addition of 2 integers"<<result;
    double res2=c.add(5.2,4.6);
    cout<<"the addition of double no's"<<res2;
    int res3=c.add(10,20,30);
    cout<<"the addition of 3 no's"<<res3;
    return 0;
}

