#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        void setValueOfName (string Name) {
            name = Name;
        }
        void setValueOfAge (int Age) {
            age = Age;
        }
        string getName () {
            return name;
        }
        int getAge () {
            return age;
        }
};

int main () {
    Student S1;
    S1.setValueOfName("Ali");
    S1.setValueOfAge(20);
    cout << "The name of student is " << S1.getName() <<endl;
    cout << "The age of student is " << S1.getAge() <<endl;
    return 0;
}