#include <iostream>
using namespace std;

class Animal {
    public:
        void eat () {
            cout << "Animal is eating" << endl;
            return;
        }
};

class Dog : public Animal {
    public:
        void bark () {
            cout << "Dog is barking" << endl;
            return;
        }
};

int main () {
    Dog d1;
    d1.eat();
    d1.bark();
    return 0;
}