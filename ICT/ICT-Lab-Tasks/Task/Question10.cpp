#include <iostream>
using namespace std;

class Employee {
    double salary;
    public:
        void setSalary (double Salary) {
            salary = Salary;
            return;
        }
        void displaySalary() {
            cout << "The salary is: " << salary << endl;
            return;
        }
};

class Manager : public Employee {
    public:
        void bonus () {
            cout << "Bonus is 5000" << endl;
            return;
        }
};

int main () {
    Manager M1;
    double M1_Salary;
    cout << "Enter the salary: ";
    cin >> M1_Salary;
    M1.setSalary(M1_Salary);
    M1.displaySalary();
    M1.bonus();
}