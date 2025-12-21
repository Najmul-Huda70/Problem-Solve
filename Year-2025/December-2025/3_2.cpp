#include <iostream>
#include <string>

class Person
{
public:
    std::string name = "Public Name (Base)";

private:
    int age = 40;

protected:
    std::string address = "Protected Address (Base)";
};

// Inherit Person privately in Student [cite: 40]
class Student : private Person
{
public:
    // Add a method show() in Student [cite: 41]
    void show()
    {
        std::cout << "--- Inside Student::show() (Private Inheritance) ---" << std::endl;

        // 1. Public members become Private: Allowed inside derived class
        std::cout << "Access Base Public (name): " << name << " (Allowed: Mapped to Student Private)" << std::endl;

        // 2. Protected members become Private: Allowed inside derived class
        std::cout << "Access Base Protected (address): " << address << " (Allowed: Mapped to Student Private)" << std::endl;

        // 3. Private members remain inaccessible
        // (Compiler Error)
    }
};

int main()
{
    std::cout << "--- 6. Private Inheritance ---" << std::endl;

    Student s6;
    s6.show();

    std::cout << "\n--- From main() (Access inherited members) ---" << std::endl;

    // Try to access inherited members using Student object

    // 1. Base Public member (now Student Private): NOT Allowed
    // std::cout << s6.name << " (ERROR: Base Public is now Student Private)" << std::endl;
    std::cout << "All inherited members are private in Student and inaccessible from main()." << std::endl;

    return 0;
}