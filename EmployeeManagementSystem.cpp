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

    Employee() {
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
    Employee JohnDoe1;
    JohnDoe1.recordEmployee();

    int x;
    cout << "Enter the percentage increase in salary: ";
    cin >> x;
    JohnDoe1.increaseSalary(x);
    JohnDoe1.displayEmployee();
    return 0;
}
