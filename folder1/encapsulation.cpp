#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    void setName(const std::string& name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void display() {
        std::cout << "Result: Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person;
    person.setName("Yazdan");
    person.setAge(30);
    person.display();
    return 0;
}