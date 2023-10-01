#include <iostream>
using namespace std;

//oop concepts
//namespace, const, new, Lvalue R value, multithreading,inline 
/* const int pi = 3.14;

//area of cylinder
const float area()
{
    return pi * 4/3 * 5^3;
}

//area of cone
/* const float area(float r, float h, float l)
{
    return pi * r * (r + l);
} 


int main()
{
    //important
    float r;
    r=area();
    cout << r;
    /* std::cout << "Area of cylinder: " << area(r, h) << std::endl;
    std::cout << "Area of cone: " << area(r, h, l) << std::endl; 
    return 0;
} */

/* int main()
{
    wchar_t a = L'A';

    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

} */

/* float add(float num1, float num2);
float add(float num1, float num2); */

/* int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    swap(num1, num2);
    return 0;
} */

/* int swap(int num1, int num2)
{
    //swap without using third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Swapping: " << num1 << " " << num2 << endl;
    return 0;
} */

//operator overloading
/* struct complex{
    float real,imag;
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main()
{
complex c1,c2,c3;
c1.real = 5;
c1.imag = 10;
c2.real = 10;
c2.imag = 20;
c3 = c2 + c1;
cout << c3.real << " " << c3.imag << endl;
return 0;
} 
//name mangling
//f(int a,int b,int c =10) possible
//f(int a,int b=10,int c =10) not possible

//lambda function
//template function
// T f(T a,T b){ return a+b; int x = f(10,12)}
//string and vector, std:string std:vector under std:array, string operations
//range based for loop, decltype
//structures,classes
//packing
//
*/




