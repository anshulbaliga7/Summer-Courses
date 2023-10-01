// Program to demonstrate how to access private members

#include <iostream>
using namespace std;

class Employee 
{
    // Private attribute
    int salary;
    string name;
  public:
    // Setter
    void setSalary(int s) 
    {
      salary = s;
    }
    void setName(string n)
    {
        name=n;
    }
    // Getter
    int getSalary() 
    {
      return salary;
    }
    string getName()
    {
        return name;
    }
};

int main() 
{
  Employee myObj;
  // cout << myObj.salary;    // cannot access private members
  myObj.setSalary(50000);
  myObj.setName("Anshul");
  std::cout << myObj.getSalary() << std::endl;
  std::cout << myObj.getName() << std::endl;
  return 0;
}