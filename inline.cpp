#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return(a+b);
}
int main()
{
    int result=add(5,10);
    cout<<"the result is"<<result;
    return 0;
}