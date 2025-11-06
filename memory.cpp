#include <iostream>
#include <memory>
using namespace std;

int main() 
{
    int *nptr;
    nptr = new int[5]{1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        cout << nptr[i] << " ";
    return 0;
}