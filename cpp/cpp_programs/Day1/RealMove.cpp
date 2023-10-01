#include <iostream>
#include <algorithm> 
class DynamicArray {
public:
    // Regular constructor
    DynamicArray(size_t size = 0)
        : size_(size), data_(size ? new int[size]() : nullptr) {}

    // Move constructor
    DynamicArray(DynamicArray&& other) noexcept
        : size_(other.size_), data_(other.data_) {
        other.size_ = 0;
        other.data_ = nullptr;  // source object is left in a safely destructible state
    }

    // Move assignment operator
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            delete[] data_;  // free existing resource

            data_ = other.data_;
            size_ = other.size_;

            other.data_ = nullptr;
            other.size_ = 0;
        }
        return *this;
    }

    // Destructor
    ~DynamicArray() {
        delete[] data_;  // free resource
    }

private:
    size_t size_;
    int* data_;
};

int main() {
    DynamicArray a(10000000); // a is a large object
    DynamicArray b(std::move(a)); // Calls move constructor
    DynamicArray c;
    c = std::move(b); // Calls move assignment operator
}
