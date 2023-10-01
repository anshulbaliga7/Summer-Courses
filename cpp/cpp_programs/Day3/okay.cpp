#include<iostream>
using namespace std;

class Animal {
  public:
    virtual void makeSound() {
      std::cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void makeSound() override {
      std::cout << "Woof\n";
    }
    void fetch() {
      std::cout << "Fetches ball\n";
    }
};

class Zoo {
  public:
    virtual Animal* getAnimal() {
      return new Animal();
    }
};

class DogZoo : public Zoo {
  public:
    // Covariant return type
    Dog* getAnimal() override {
      return new Dog();
    }
};
int main(){
    Zoo* polymorphic_zoo = new DogZoo();
    Animal* polymorphic_animal = polymorphic_zoo->getAnimal(); // Returns a Dog pointer
    polymorphic_animal->makeSound(); // Prints "Woof"
// polymorphic_animal->fetch(); // Error: Animal has no fetch method
}