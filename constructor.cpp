#include <iostream>
using namespace std;
class A
 {
public:
    A()
     {
        cout << "Constructor called" << endl;
    }
};

int main()
 {
    A obj1;
    return 0;
}