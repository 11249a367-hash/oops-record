#include<iostream>
class myclass
{
    public:
    static int staticcount;
    myclass()
    {
        staticcount++;
        std::cout<<"object created staticcount:"<<staticcount<<std::endl;
    }
    static void displaystaticcount()
    {
        std::cout<<"current staticcount(from static function):"<<staticcount<<std::endl;
    }
};
int myclass::staticcount=0;
int main()
{
    myclass obj1;
    myclass obj2;
    myclass obj3;
    std::cout<<"staiccount accessed directly:"<<myclass::staticcount<<std::endl;
    myclass::displaystaticcount();
    return 0;
}