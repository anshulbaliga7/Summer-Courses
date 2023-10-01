// Friend functions can access both private and public members of a class
#include <iostream>

class MyClass {


protected:
    int protectedMember;
private:
    int privateMember;

public:
    MyClass(int a, int b, int c) {
        publicMember = a;
        protectedMember = b;
        privateMember = c;
    }
    int publicMember;
    friend void friendFunction(MyClass obj);
};

void friendFunction(MyClass obj) {
    // Accessing private and protected members of MyClass
    int b = obj.protectedMember;   // Accessing protected member
    int c = obj.privateMember;     // Accessing private member
    int d = obj.publicMember;      // Accessing public member

    // Perform some operations using the private and protected members
    std::cout << "Public member: " << d << std::endl;
    std::cout << "Private member: " << c << std::endl;
    std::cout << "Protected member: " << b << std::endl;
}

int main() {
    MyClass obj(10,20,30);

    // Calling the friend function
    friendFunction(obj);

    return 0;
}
