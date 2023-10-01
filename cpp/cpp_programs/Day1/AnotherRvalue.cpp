#include<iostream>
using namespace std;
void print(int& x) { // A function that takes an lvalue reference
    cout << "lvalue: " << x << endl;
}

void print(int&& x) { // A function that takes an rvalue reference
    cout << "rvalue: " << x << endl;
}

int main() {
    int a = 10; // a is an lvalue
    print(a); // Calls print(int& x) with an lvalue argument
    print(20); // Calls print(int&& x) with an rvalue argument
    return 0;
}
