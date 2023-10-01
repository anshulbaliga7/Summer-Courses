#include<iostream>
using namespace std;

template<typename type>
type var(type var1, type var2)
{
    return var1 + var2;
}
int main()
{
    int a = 10;
    int b = 20;
    double c= 20.32;
    double d = 30.32;
    cout << var(a, b) << endl;
    cout << var(c, d) << endl;
    return 0;
}




