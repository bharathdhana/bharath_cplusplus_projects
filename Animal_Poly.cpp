#include <iostream>
using namespace std;

class Animal {
public:
  virtual void makeSound() { cout << "Animal makes sound" << endl; }
};
class Dog : public Animal {
public:
  void makeSound() { cout << "Dog makes Woof sound" << endl; }
};
class Cat : public Animal {
public:
  void makeSound() { cout << "Cat makes Meow sound" << endl; }
};

int main() {
  Animal *cat = new Cat();
  Animal *dog = new Dog();
  cat->makeSound();
  dog->makeSound();
}