// See this 
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    MyClass(int value) : data(value) {}

    friend void friendFunc(MyClass& obj);
};

void friendFunc(MyClass& obj) {
    // Code to call the destructor of MyClass
    obj.~MyClass();
}

int main() {
    MyClass obj(10);
    friendFunc(obj);
    return 0;
}
