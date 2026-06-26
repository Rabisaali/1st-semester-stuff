#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        void setName(string Name) {
            name = Name;
            return;
        }
        void setAge(int Age) {
            age = Age;
            return;
        }
        void displayInfo () {
            cout << "The name is " << name << " and the age is " << age << endl;
        }
};

class Student : public Person {
    private:
        int rollNo;
    public:
        void setRollNo(int RollNo) {
            rollNo = RollNo;
            return;
        }
        void displayRollNo () {
            cout << "The roll number is " << rollNo << endl;
        }
};

int main () {
    Student s1;
    string s1_name;
    cout << "Enter the name of the student: ";
    cin >> s1_name;
    int s1_age;
    cout << "Enetr the age of the student: ";
    cin >> s1_age;
    int s1_rollNo;
    cout << "Enter the roll number of the student: ";
    cin >> s1_rollNo;
    s1.setName(s1_name);
    s1.setAge(s1_age);
    s1.setRollNo(s1_rollNo);
    s1.displayInfo();
    s1.displayRollNo();
}