#include <iostream>
using namespace std;
class bookdetails
{
    int year,cost;
    char title[30],name[10];
    public:
    void read();
    void display();
};
void bookdetails::read()
{
    cout<<"enter title,author name\n";
    cin>>title>>name;
    cout<<"enter year and cost\n";
    cin>>year>>cost;
}
void bookdetails::display()
{
    cout<<"book details are"<<title<<name<<year<<cost;
}
int main()
{
    bookdetails a;
    a.read();
    a.display();
}