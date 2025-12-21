#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person(const string &n, int a) : name(n), age(a) {}
    std::string getName() const { return name; }
    int getAge() const { return age; }
};
class Employee : public Person
{
    double salary;

public:
    Employee(string n, int a, double s) : Person(n, a)
    {

        salary = s;
    }
    double getSalary() const { return salary; }
};
class Manager : public Employee
{
    string department;

public:
    Manager(string &n, int a, double s, string d) : Employee(n, a, s)
    {
        department = d;
    }
    void display() const
    {
        std::cout << "\n--- Manager Details ---" << std::endl;
        std::cout << "Name:       " << getName() << std::endl;
        std::cout << "Age:        " << getAge() << std::endl;
        std::cout << "Salary:     $" << getSalary() << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};
int main()
{
    Manager manager1("Alex Johnson", 45, 95000.00, "Research & Development");
}