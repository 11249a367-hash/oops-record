#include <iostream>
using namespace std;
class studentdetails
{
    int year;
    int number;
    char name[30];
    char dept[10];
    public:
    void read();
    void display();
};
void studentdetails::read()
{
    cout<<"enter the name,dept,year,number\n";
    cin>>name>>dept>>year>>number;
}
void studentdetails::display()
{
    cout<<"studentdetails are"<<name<<dept<<year<<number;
}
int main()
{
    studentdetails a;
    a.read();
    a.display();
    return 0;
}