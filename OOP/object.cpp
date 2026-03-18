#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << endl;
    }
};

int main() {
    // Create object
    Student s1;

    // Assign values
    s1.name = "iSignal Research";

    // Call function
    s1.display();

    return 0;
}
