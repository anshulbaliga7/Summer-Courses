#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

class WithInitializerList {
public:
    WithInitializerList(const vector<int>& v) : v_(v) {}

private:
    vector<int> v_;
};

class WithoutInitializerList {
public:
    WithoutInitializerList(const vector<int>& v) {
        v_ = v;
    }

private:
    vector<int> v_;
};

int main() {
    const int N = 10000000; // Ten million
    vector<int> v(N, 1);

    auto start = chrono::high_resolution_clock::now();
    WithInitializerList withInitializerList(v);
    auto end = chrono::high_resolution_clock::now();
    auto durationWith = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "With initializer list: " << durationWith << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    WithoutInitializerList withoutInitializerList(v);
    end = chrono::high_resolution_clock::now();
    auto durationWithout = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Without initializer list: " << durationWithout << " microseconds" << endl;

    return 0;
}
