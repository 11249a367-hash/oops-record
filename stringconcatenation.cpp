#include <iostream>
#include <string.h> 

class MyString {
public:
    char str[100]; 
    MyString() {
        str[0] = '\0'; 
    }
    MyString(const char s[]) {
        strcpy(str, s);
    }
    MyString operator+(const MyString& S2) const {
        MyString temp; 
        strcpy(temp.str, this->str); 
        strcat(temp.str, S2.str);    
        return temp;                 
    }
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3;

    s3 = s1 + s2; 
    s3.display();  

    return 0;
}