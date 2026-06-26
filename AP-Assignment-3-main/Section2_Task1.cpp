#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double ElectricField;
    double Area;
    double angle;

    cout << "Enter the value of Electric field in Newton per Coulomb: ";
    cin >> ElectricField;

    cout << "Enter the value of area in metre square: ";
    cin >> Area;

    cout << "Enter the angle in degrees: ";
    cin >> angle;

    double angle_rad = angle * (3.14159265/180.0);

    double ElectricFlux = ElectricField * Area * cos(angle_rad);
    cout << "Electric flux in Volt-meter is " << ElectricFlux << endl;    
}