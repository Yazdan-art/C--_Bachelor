#include <iostream>

class Outer {
public:
    class Inner {
    public:
        void display() {
            std::cout << "Result: Inner class method called!" << std::endl;
        }
    };
};

int main() {
    Outer::Inner inner;
    inner.display();
    return 0;
}