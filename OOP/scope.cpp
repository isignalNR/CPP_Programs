#include <iostream>

class MyClass {
public:
    // Declaration of a member function inside the class
    void myMethod();
};

// Definition of the member function outside the class using ::
void MyClass::myMethod() {
    std::cout << "Hello from myMethod!" << std::endl;
}

int main() {
    MyClass myObj;
    myObj.myMethod(); // Call the method
    return 0;
}

