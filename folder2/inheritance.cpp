#include <iostream>

class Animal {
public:
    void speak() {
        std::cout << "Result: Animal speaks!" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "Result: Dog barks!" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.speak(); // Calls Dog's speak method
    return 0;
}