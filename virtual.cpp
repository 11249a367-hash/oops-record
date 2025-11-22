#include <iostream>
using namespace std; 
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;
    Animal* animalPtr;
    animalPtr = &myDog;
    animalPtr->makeSound(); 
    animalPtr = &myCat;
    animalPtr->makeSound(); 

    return 0;
}