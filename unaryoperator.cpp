 #include <iostream>
 using namespace std;
class unaryop
{
    int x,y,z;
    public:
    unaryop()
    {
        x=0;
        y=0;
        z=0;
    }
    unaryop(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }

    void display()
    {
        cout<<"\n\n\t"<<x<<"  "<<y<<" " <<z;
    }
    // overloaded minus (-) operator
    void operator-();
};
    void unaryop :: operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    int main()
    {
        unaryop un(10,-40,70);
        cout<<"\n\nnumbers are:::\n";
        un.display();
        -un;
        cout<<"\n\nnumbers are after overloaded minus (-)operator :::\n";
        un.display();
        return 0;
    }
