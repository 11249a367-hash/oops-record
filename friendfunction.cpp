#include<iostream>

#include<conio.h>
using namespace std;

class sample

{

int a, b;

public:

void setvalue()

{

cout<<"Enter value of a ";

cin>>a;

cout<<"Enter value of b ";

cin>>b;

}

friend float mean(sample);

float mean(sample s)

{

return float(s.a+s.b)/2.0;

}

};

int main()

{


sample x;

x.setvalue();

cout<<"Mean value is:";

getch();

}