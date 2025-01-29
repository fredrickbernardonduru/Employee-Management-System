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

    Employee(string name, int age, float salary, string department) {
        Name = name;
        Age = age;
        Salary = salary;
        Department = department;
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

    void displayEmployee() {
        cout <<"Employee Name: " << Name << endl;
        cout <<"Employee Age: " << Age << endl;
        cout <<"Employee Salary: " << Salary << endl;
        cout <<"Employee Department: " << Department << endl;
    }

    void increaseSalary(int x) {
        Salary = Salary + ((x / 100.0) * Salary);
    }
};

int main() {
    int x;
    string Name;
    int Age;
    float Salary;
    string Department;
    cout << "Enter Employee Name: ";
    cin >> Name;
    cout << "Enter Employee Age: ";
    cin >> Age;
    cout << "Enter Employee Salary: ";
    cin >> Salary; 
    cout << "Enter Employee Department: "; 
    cin >> Department;
    cout << "Enter the percentage increase in salary: ";
    cin >> x;

    Employee JohnDoe1(Name, Age, Salary, Department);
    JohnDoe1.increaseSalary(x);
    JohnDoe1.displayEmployee();
}
