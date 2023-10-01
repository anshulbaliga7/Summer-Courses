#include <iostream>
#include <algorithm>

class DynamicArray {
public:
    DynamicArray(size_t size = 0)
        : size_(size), data_(size ? new int[size]() : nullptr) {}

    // Copy constructor
    DynamicArray(const DynamicArray& other)
        : size_(other.size_), data_(size_ ? new int[size_]() : nullptr) {
        std::copy(other.data_, other.data_ + size_, data_);
    }

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            delete[] data_; // free existing resource
            
            size_ = other.size_;
            data_ = size_ ? new int[size_]() : nullptr;
            std::copy(other.data_, other.data_ + size_, data_);
        }
        return *this;
    }

    ~DynamicArray() {
        delete[] data_;
    }

private:
    size_t size_;
    int* data_;
};

int main() {
    DynamicArray a(10000000); // a is a large object
    DynamicArray b = a; // Calls copy constructor
    a = DynamicArray(); // Grounds a to an empty DynamicArray

    DynamicArray c;
    c = b; // Calls copy assignment operator
    b = DynamicArray(); // Grounds b to an empty DynamicArray
}
