#include<iostream>
int main() {
    int&& rvalue_ref = 5 + 3; // 5 + 3 is a temporary object, an rvalue
    rvalue_ref += 2;
    std::cout << rvalue_ref << std::endl; // outputs 10
}
