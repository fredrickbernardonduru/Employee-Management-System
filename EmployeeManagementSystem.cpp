#include <iostream>
#include <string>
#include <list>

using namespace std;

class Employee {
    private:
    string Name;
    int Age;
    float Salary;
    string Department;


    public:

    Employee(string name, int age, float salary, string Department) {
        Name = name;
        Age = age;
        Salary = salary;
        Department = Department;
    }

    void recordEmployee() {
        cout << "Enter Employee Name: ";
        cin >> Name;
        cout << "Enter Employee Age: ";
        cin >> Age;
        cout << "Enter Employee Salary: ";
        cin >> Salary;
        cout << "Enter Employee Department: ";
        cin >> Department;
    }
};