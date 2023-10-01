#include <iostream>
using namespace std;
class MyClass {
private:
    int privateMember;

public:
    MyClass(int privateVal) : privateMember(privateVal) {}
    // DEfone a prototype
    friend void friendFunction(MyClass obj);
};
// A friend function does not have its name qualified with 
//the class scope because it is not a member function:

void friendFunction(MyClass obj) {

    // Accessing private member of MyClass
    int c = obj.privateMember;     // Accessing private member

    // Perform some operations using the private member
    std::cout << "Private member: " << c << std::endl;
    }

int main() {
    MyClass obj(10);

    // Calling the friend function
    friendFunction(obj);   // No invoking object of the class is required
}
