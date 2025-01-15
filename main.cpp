#include <iostream>
#include <cstdlib>

void runEncapsulation() {
    system("folder1/encapsulation.exe"); // Adjust the command based on your OS
}

void runInheritance() {
    system("folder2/inheritance.exe");
}

void runPolymorphism() {
    system("folder3/polymorphism.exe");
}

void runInnerClass() {
    system("folder4/inner_class.exe");
}

int main() {
    int choice;

    do {
        std::cout << "Welcome to C++ Practice Menu!" << std::endl;
        std::cout << "1. Encapsulation Practice" << std::endl;
        std::cout << "2. Inheritance Practice" << std::endl;
        std::cout << "3. Polymorphism Practice" << std::endl;
        std::cout << "4. Inner Class Practice" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                runEncapsulation();
                break;
            case 2:
                runInheritance();
                break;
            case 3:
                runPolymorphism();
                break;
            case 4:
                runInnerClass();
                break;
            case 5:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}