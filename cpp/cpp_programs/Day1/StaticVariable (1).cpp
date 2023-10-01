#include<bits/stdc++.h>
#include<iostream>
using namespace std;r̥

class student {
  public:
    // static variable 
    static int passing_marks;
};

int student::passing_marks = 33;

int main() 
{
  // definining object of the class student
  student s;
  cout << s.passing_marks;
  cout << "Hello";


  return 0;
}
