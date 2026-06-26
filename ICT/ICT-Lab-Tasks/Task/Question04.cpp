#include <iostream>
using namespace std;

class Employee {
    private:
        int ID;
        double salary;
    public:
        void setID (int id) {
            ID = id;
            return;
        }
        void setSalary (double Salary) {
            if (Salary < 0) {
                cout << "Salary cannot be less that 0" << endl;
                return;
            }
            else {
                salary = Salary;
                return;
            }     
        }
        int getID () {
            return ID;
        }
        double getSalary () {
            return salary;
        }
};

int main () {
    Employee e1;
    e1.setID(101);
    e1.setSalary(50000);
    cout << "The employee's ID is " << e1.getID() <<" and the salary is " << e1.getSalary() << endl; 
    return 0;
}