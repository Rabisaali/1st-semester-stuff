#include <iostream>
using namespace std;

class Car {
    private:
        double speed;
        double fuel;
    public:
        void setSpeed (double Speed) {
            speed = Speed;
            return;
        }
        void setFuel (double Fuel) {
            if (Fuel < 0) {
                cout << "Fuel can never be negative" << endl;
                return;
            }
            else {
                fuel = Fuel;
                return;
            }
        }
        double getSpeed () {
            // the question asked to "display"
            cout << "The speed of the car is " << speed << " km/h" << endl;
            return speed;
        }
        double getFuel () {
            // the question asked to "display"
            cout << "The fuel of the car is " << fuel << " litres" << endl;
            return fuel;
        }
};

int main () {
    Car c1;
    c1.setFuel(120);
    c1.setSpeed(50);
    double Speed = c1.getSpeed();
    double Fuel = c1.getFuel();

    cout << "The car that has been created has the speed of " << Speed << " km/h and the fuel of " << Fuel << " litres" << endl;
    return 0;
}