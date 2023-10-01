#include <iostream>
#include <string>
#include <utility> // for std::move

int main() {
    std::string str1 = "Hello, World!";
    std::string str2 = std::move(str1);

    std::cout << "str1: " << str1 << '\n'; // str1 is empty
    std::cout << "str2: " << str2 << '\n'; // str2 contains "Hello, World!"
}
