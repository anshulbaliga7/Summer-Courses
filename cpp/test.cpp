#include<iostream>
#include<map>
#include<vector>
void test()
{
 int n = 65;
 std::cout << "There are " << n << " students in this class" << std::endl;
 std::cout << n  << n++ << n++ << n++ << std::endl;
 double pi = 3.14159783;
 std::cout.precision(5);
 std::cout << pi << std::endl;
}
int main()
{
std::cout << "Welcome to the class of 2023 on c++\n";
test();
std::map<std::string, std::vector<int>> map;
std::vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
map["one"] = v;

for(const auto& kvp : map) 
{
  std::cout << kvp.first << std::endl;

  for(auto v : kvp.second)
  {
    std::cout << v << std::endl;
  }
}

std::cout << "Array contents:" << std::endl;
int arr[] = {1,2,3,4,5};
for(int& e : arr) 
{
  e = e*e;
  std::cout << e << std::endl;
}
}

/* enum Weekday (Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday);
enum Weekday today = Wednesday;
std::cout << today << std::endl; */