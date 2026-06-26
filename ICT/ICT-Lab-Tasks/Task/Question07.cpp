#include <iostream>
using namespace std;

class Vehicle {
    private:
        double speed;
    public:
        void setSpeed (double Speed) {
            speed = Speed;
            return;
        }
        double getSpeed () {
            return speed;
        }
        void showSpeed () {
            cout << "The speed is " << speed << " km/hr" <<endl;
        }
};

class Car : public Vehicle {
    public: 
        void fuelType () {
            cout << "Petrol" << endl;
            return;
        }
};

int main () {
    Car c1;
    double userInput;
    cout << "Enter the speed: ";
    cin >> userInput;
    c1.setSpeed(userInput);
    c1.showSpeed();
    c1.fuelType();
}