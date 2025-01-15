#include <iostream>
#include <cstdlib>

    /**
     * @brief important
     * 
     * // Adjust the command based on your OS for example 
     * if you are using windows instead of "folder1/encapsulation",
     *  you have to use folder1/encapsulation.exe
     */
void runEncapsulation() {
    system("folder1/encapsulation"); //this is good for linux
    // system("folder1/encapsulation.exe"); // this is good for windows

}

void runInheritance() {
    system("folder2/inheritance");
}

void runPolymorphism() {
    system("folder3/polymorphism");
}

void runInnerClass() {
    system("folder4/inner_class");
}

int main() {
    int choice;

    do {
         std::cout << " 🫣"<< std::endl;
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